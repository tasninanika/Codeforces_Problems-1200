#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, c = 0;
    cin >> n >> l;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i+1] - arr[i] > c){
            c = arr[i+1] - arr[i];
        }
    }
    double a = arr[0];
    double b = (double)c / 2;
    double result = max(a,b);
    double d = l - arr[n-1];

    result = max(d, result);

    cout << fixed <<setprecision(10) << result << endl;


    return 0;
}
