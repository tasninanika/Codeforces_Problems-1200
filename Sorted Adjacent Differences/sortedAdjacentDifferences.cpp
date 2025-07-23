#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<long long> v;
        int l = 0, r = n - 1;

        while(r > l){
            v.push_back(a[r--]);
            v.push_back(a[l++]);
        }

        if(n % 2 != 0){
            v.push_back(a[n / 2]);
        }

        reverse(v.begin(), v.end());

        for(int i = 0; i < n; i++){

        }
    }

    return 0;
}
