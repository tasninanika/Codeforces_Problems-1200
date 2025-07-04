#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        long long sum = 0;

        for(int i = n - 1; i >= 0; i--){
            int turn = n - 1 - i;

            if(turn % 2 == 0){
                if(arr[i] % 2 == 0){
                    sum += arr[i];
                }
            }
            else{
                if(arr[i] % 2 == 1){
                    sum -= arr[i];
                }
            }
        }

        if(sum > 0){
            cout << "Alice" << endl;
        }
        else if(sum < 0){
            cout << "Bob" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }

    return 0;
}
