#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        long long h;
        cin >> n >> h;

        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        vector<long long> diff(n - 1);
        for(int i = 0; i < n - 1; i++) {
            diff[i] = v[i + 1] - v[i];
        }

        long long left = 1, right = 1e18, ans = right;
        while(left <= right){
            long long mid = (left + right) / 2;
            long long sum = mid;
            for (auto x : diff) sum += min(mid, x);

            if(sum >= h){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
