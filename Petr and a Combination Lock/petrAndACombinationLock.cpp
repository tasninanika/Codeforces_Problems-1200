#include<iostream>
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

        }
    }

    return 0;
}
