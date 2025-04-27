#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        unordered_map<int, long long> c;
        long long p = 0;
        for(int i = 0; i < n; i++){
            int ai;
            cin >> ai;

            p += c[ai - i];
            c[ai - i]++;
        }

        cout << p << endl;
    }

    return 0;
}
