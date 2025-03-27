#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        vector<int> arr;
        int num = 3;
        while(arr.size() < k){
            if(num % 3 == 0){
                arr.push_back(num);
            }
            num++;
        }

        cout << arr[k - 1] << endl;
    }

    return 0;
}
