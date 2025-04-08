#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;

    for(int i = 0; i < x.size(); i++){
         int digit = stoi(string(1, x[i]));
         int inverted = 9 - digit;

        if(i == 0 && digit == 9){
            continue;
        }

        if(inverted < digit){
            x[i] = inverted + '0';
        }

    }

    cout << x << endl;

    return 0;
}

