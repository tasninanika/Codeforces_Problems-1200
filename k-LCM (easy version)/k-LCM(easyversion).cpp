#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int a, b, c;

        if(n % 2 == 1){
            a = n / 2;
            b = n / 2;
            c = 1;
        }
        else{
            if((n / 2) % 2 == 1){
                a = (n / 2) - 1;
                b = a;
                c = n - 2 * a;
            }
            else{
                a = n / 2;
                b = n / 4;
                c = b;
            }
        }
    cout << a << " " << b << " " << c << endl;

    }

    return 0;
}
