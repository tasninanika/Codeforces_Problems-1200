#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int totalCombinations = 1 << n;

    for(int i = 0; i < totalCombinations; i++){
        int sum = 0;

        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                sum += a[j];
            }
            else{
                sum -= a[j];
            }
        }

        if(sum % 360 == 0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
