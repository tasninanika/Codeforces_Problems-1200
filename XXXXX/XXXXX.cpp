#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int a[100001];
        long long total = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            total += a[i];
        }

        if(total % x != 0){
            cout << n << endl;
        }
        else{
            int left = 0, right = n - 1;

            while(left < n && a[left] % x == 0){
                left++;
            }

            while(right >= 0 && a[right] % x == 0){
                right--;
            }

            if(left == n){
                cout << -1 << endl;
            }
            else{
                int max_len = max(n - left - 1, right);

                cout << max_len << endl;
            }
        }
    }

    return 0;
}

