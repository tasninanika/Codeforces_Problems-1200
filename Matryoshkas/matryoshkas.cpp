#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    v.push_back(1e9 + 3);

    long long prev = v[0];
    long long cur = 1, cnt = 0, run = 0;


    return 0;
}
