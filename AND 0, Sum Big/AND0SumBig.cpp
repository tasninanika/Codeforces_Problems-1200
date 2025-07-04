#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    long long mod = 1000000007;

    while(t--){
        int n, k;
        cin >> n >> k;

        long long result = 1;

        for(int i = 0; i < k; i++){
            result = (result * n) % mod;
        }

        cout << result << endl;
    }

    return 0;
}

