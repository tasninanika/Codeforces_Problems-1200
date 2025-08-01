#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n), pref(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        pref[0] = arr[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }

        int c = n - 1;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                while (c > i && s[c] != 'R') {
                    c--;
                }

                if (c > i) {
                    int left = (i > 0) ? pref[i - 1] : 0;
                    ans += pref[c] - left;
                    c--;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
