#include<iostream>
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

    for(int i = 0; i < n; i++){
        if(arr[i+1] - arr[i] > c)
    }

    return 0;
}
