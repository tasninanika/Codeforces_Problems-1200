#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        if(n % 2 == 0){
            long long pos = k % n;

            if(pos == 0){
                pos = n;
            }
            cout << pos << endl;
        }
        else{
            long long half = n / 2;
            long long extra = (k - 1) / half;
            long long pos = k + extra;
            pos = (pos - 1) % n + 1;

            cout << pos << endl;
        }
    }




    return 0;
}
