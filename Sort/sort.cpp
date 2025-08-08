#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        vector<int> count_a(26, 0);
        vector<int> count_b(26, 0);

        for (int i = l; i <= r; ++i) {
            count_a[a[i] - 'a']++;
            count_b[b[i] - 'a']++;
        }

        int operations = 0;
        for (int i = 0; i < 26; ++i) {
            operations += abs(count_a[i] - count_b[i]);
        }

        cout << operations / 2 << '\n';
    }

    return 0;
}
