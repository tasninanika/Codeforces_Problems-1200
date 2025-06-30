#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string str;
        cin >> str;

        int zero = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == '0'){
                zero++;
            }
        }

        if(zero == 2 && n % 2 == 1 && str[n / 2] == '0'){
            cout << "DRAW" << endl;
        }
        else if(zero == 1 || zero % 2 == 0){
            cout << "BOB" << endl;
        }
        else{

        }
    }

    return 0;
}
