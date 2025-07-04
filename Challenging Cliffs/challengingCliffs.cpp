#include<iostream>
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

        sort(arr.begin(), arr.end());

        int min_diff = arr[1] - arr[0];
        int min_index = -1;

        for(int i = 1; i < n - 1; i++){
            int diff = arr[i + 1] - arr[i];

            if(diff < min_diff){
                min_diff = diff;
            }
        }
    }

    return 0;
}
