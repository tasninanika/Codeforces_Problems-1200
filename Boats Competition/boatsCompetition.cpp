#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if(n == 1){
            cout << 0 << endl;
            continue;
        }

        ll best = 0;
        for(ll sum = a[0] + a[1]; sum <= a[n - 1] + a[n - 2]; sum++){
            ll l = 0;
            ll r = n - 1;
            ll total = 0;

            while(r > l){
                ll curr = a[l] + a[r];

                if(curr == sum){
                    total++;
                    l++;
                    r--;
                }
                else if(curr > sum){
                    r--;
                }
                else{
                    l++;
                }
            }

            if(total > best){
                best = total;
            }
        }

        cout << best << endl;
    }

    return 0;
}
