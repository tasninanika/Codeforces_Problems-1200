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

        sort(arr.begin(), arr.end());

        int min_diff = arr[1] - arr[0];
        int min_index = -1;

        for(int i = 1; i < n - 1; i++){
            int diff = arr[i + 1] - arr[i];

            if(diff < min_diff){
                min_diff = diff;
                min_index = i;
            }
        }

        vector<int> output;

        if(min_index == -1){
            if((arr[n - 1] - arr[n - 2]) <= (arr[1] - arr[0])){
                output.push_back(arr[n - 2]);

                for(int i = 0; i < n; i++){
                    if(i != n - 2){
                        output.push_back(arr[i]);
                    }
                }
            }
            else{
                output.push_back(arr[0]);

                for(int i = 2; i < n; i++){
                    output.push_back(arr[i]);
                }
                output.push_back(arr[1]);
            }
        }
        else{
            output.push_back(arr[min_index]);
            for(int i = min_index + 2; i < n; i++){
                output.push_back(arr[i]);
            }
            for(int i = 0; i < min_index; i++){
                output.push_back(arr[i]);
            }
            output.push_back(arr[min_index + 1]);
        }

        for(int i = 0; i < output.size(); i++){
            cout << output[i] << endl;
        }

        cout << endl;
    }

    return 0;
}
