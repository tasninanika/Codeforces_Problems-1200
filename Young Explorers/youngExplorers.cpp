#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> cnt(n + 10);
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x]++;
        }

        long long ans = 0, extra = 0;
        for(int i = 1; i <= n; i++){
            cnt[i] += extra;
            ans += cnt[i] / i;
            extra = cnt[i] % i;
        }

        cout << ans << endl;
    }

    return 0;
}

