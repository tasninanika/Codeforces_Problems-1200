#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long min_moves = 0;
    for(int i = 0; i < n; ++i){
        min_moves += abs(a[i] - (i + 1));
    }


    return 0;
}
