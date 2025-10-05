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
        }
    }




    return 0;
}
