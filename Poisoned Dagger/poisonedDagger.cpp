#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long h;
        cin >> n >> h;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long left = 1, right = h, ans = h;
        while(left <= right){
            long long mid = (left + right) / 2;
            long long sum = 0;
        }
    }


    return 0;
}
