#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        long long result = k + (k / (n - 1));


        cout << result << endl;
    }

    return 0;
}
