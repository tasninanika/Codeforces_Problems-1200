#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int sum = 0;
        int ans = n + 1;
        int l = 0;

        for (int r = 0; r < n; r++) {
            sum += v[r];

            while (sum > s && l <= r) {
                sum -= v[l];
                l++;
            }

            if (sum == s) {
                ans = min(ans, n - (r - l + 1));
            }
        }

        if (ans == n + 1) ans = -1;

        cout << ans << endl;
    }

    return 0;
}
