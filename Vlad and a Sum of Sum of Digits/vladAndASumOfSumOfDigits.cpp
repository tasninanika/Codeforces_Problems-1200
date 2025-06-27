#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int preSum[200001];

    preSum[0] = 0;

    for (int i = 1; i <= 200000; i++) {
        int sum = 0, num = i;

        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        preSum[i] = preSum[i - 1] + sum;
    }

    while(t--){
        int n;
        cin >> n;

        cout << preSum[n] << endl;
    }

    return 0;
}

