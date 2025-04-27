#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        unordered_map<int, ll> c;
        ll p = 0;
        for(int i = 0; i < n; i++){
            int ai;
            cin >> ai;

            p += c[ai - i];
        }
    }

    return 0;
}
