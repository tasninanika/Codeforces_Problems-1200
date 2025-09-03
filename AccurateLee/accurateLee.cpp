#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int leading_zeros = 0;
    while(leading_zeros < n && s[leading_zeros] == '0'){
        leading_zeros++;
    }

    int trailing_ones = 0;
    while(trailing_ones < n && s[n - 1 - trailing_ones] == '1'){
        trailing_ones++;
    }

    if(leading_zeros + trailing_ones < n){
        for(int i = 0; i < leading_zeros; ++i){
            cout << '0';
        }
        cout << '0';

        for(int i = 0; i < trailing_ones; ++i){
            cout << '1';
        }

        cout << endl;
    }
    else{
        cout << s << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
