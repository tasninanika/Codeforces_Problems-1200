#include<iostream>
using namespace std;

int main(){
    int t, n, x, a;
    cin >> t;

    while(t--){
        cin >> n >> x;
        int even = 0, odd = 0;

        for(int i= 0; i < n; i++){
            cin >> a;

            if(a % 2 == 1){
                odd++;
            }
            else{
                even++;
            }
        }

        int m = min(even, x - 1);
        int d = x - m;

        if(d % 2 == 0){
            d++;
        }

        if(odd >= d && d <= x){
            cout << "YES" << endl;
        }
    }


    return 0;
}
