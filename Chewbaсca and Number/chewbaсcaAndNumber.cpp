#include<iostream>
using namespace std;

int main(){
    string x;
    cin >> x;

    for(int i = 0; i < x.size(); i++){
        int digit = x[i] - '0';
        int inverted = 9 - digit;

        if(i == 0 && digit == 9){
            continue;
        }

    }

    return 0;
}
