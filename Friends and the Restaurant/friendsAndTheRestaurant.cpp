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
    }


    return 0;
}
