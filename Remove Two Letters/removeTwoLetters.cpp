#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        string s;
        cin >> n >> s;

        int ans = 0;

        for(int i = 1; i < n; i++){
            if(i >= 2 && s[i] == s[i - 2]){
                continue;
            }
        }
    }

    return 0;
}
