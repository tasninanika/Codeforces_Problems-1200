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
    }

    return 0;
}
