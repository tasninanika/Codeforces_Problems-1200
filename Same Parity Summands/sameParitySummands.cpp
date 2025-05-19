#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        if(k > n){
            cout << "NO" << endl;
            continue;
        }

        if((n - k + 1) % 2 == 1 && n - k + 1 > 0){
            cout << "YES" << endl;
            for(int i = 0; i < k - 1; i++){
                cout << 1 << " ";
            }
            cout << n - k + 1 << endl;
         }
         else if((n - 1 * (k - 1)) % 2 == 0 && (n - 2 * (k - 1)) > 0){
            cout << "YES" << endl;
            for(int i = 0; i < k - 1; i++){

            }
         }
    }

    return 0;
}
