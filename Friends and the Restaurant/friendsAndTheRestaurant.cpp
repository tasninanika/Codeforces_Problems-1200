#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> t;

        vector<long long> x(n), y(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }

        vector<long long> diff(n);
        for(int i = 0; i < n; i++){
            diff[i] = x[i] - y[i];
        }

        sort(diff.begin(), diff.end());

        int l = 0, r = n - 1, ans = 0;
        while(l < r){
            if(diff[l] + diff[r] <= 0){
                ans++;
                l++;
                r--;
            }
        }
    }


    return 0;
}
