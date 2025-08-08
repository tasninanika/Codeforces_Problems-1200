#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        vector<vector<int>> freq_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> freq_b(n + 1, vector<int>(26, 0));

        for (int i = 1; i <= n; ++i) {
            for (int c = 0; c < 26; ++c) {
                freq_a[i][c] = freq_a[i - 1][c];
                freq_b[i][c] = freq_b[i - 1][c];
            }
            freq_a[i][a[i - 1] - 'a']++;
            freq_b[i][b[i - 1] - 'a']++;
        }

        while(q--){
            int l, r;
            cin >> l >> r;

            int ops = 0;
            for (int c = 0; c < 26; ++c) {
                int count_a = freq_a[r][c] - freq_a[l - 1][c];
                int count_b = freq_b[r][c] - freq_b[l - 1][c];
                ops += abs(count_a - count_b);
            }

            cout << ops / 2 << endl;
        }
    }

    return 0;
}
