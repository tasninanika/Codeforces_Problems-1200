#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<<ll, int>> row1(n), row2(n), row3(n);

        for(int i = 0; i < n; i++){
            cin >> row1[i].first;
            row1[i].second = i;
        }

        for(int i = 0; i < n; i++){
            cin >> row2[i].first;
            row2[i].second = i;
        }

        for(int i = 0; i < n; i++){
            cin >> row3[i].first;
            row3[i].second = i;
        }

        sort(row1.rbegin(), row1.rend());
        sort(row2.rbegin(), row2.rend());
        sort(row3.rbegin(), row3.rend());

        ll maxSum = 0;

        for(int i = 0; i < min(3, n); i++){
            for(int j = 0; j < min(3, n); j++){
                for(int k = 0; k < min(3, n); k++){

                }
            }
        }
    }


    return 0;
}
