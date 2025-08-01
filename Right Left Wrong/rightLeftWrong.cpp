#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        string s;
        cin >> s;

        vector<long long> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + a[i];
        }

        int r = n - 1;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                while (r > i && s[r] != 'R') r--;
                if (r > i) {
                    long long left = (i > 0 ? prefix[i - 1] : 0);
                    ans += prefix[r] - left;
                    r--;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
