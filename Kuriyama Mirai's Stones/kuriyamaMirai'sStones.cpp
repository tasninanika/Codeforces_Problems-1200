#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long arr[n] = {};
    long long arr2[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2, arr2 + n);
    for(int i = 1; i < n; i++){
        arr[i] = arr[i - 1] + arr[i];
        arr2[i] = arr2[i - 1] + arr2[i];
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int t, r, l;

        l -= 1;
        r -= 1;
        if(t == 1){

        }
    }


    return 0;
}
