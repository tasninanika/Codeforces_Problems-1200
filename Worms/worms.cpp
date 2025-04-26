#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    vector<int> prefix(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            prefix[i] = a[i];
        }
        else{
            prefix[i] = prefix[i - 1] + a[i];
        }
    }

    int m;
    cin >> m;

    return 0;
}
