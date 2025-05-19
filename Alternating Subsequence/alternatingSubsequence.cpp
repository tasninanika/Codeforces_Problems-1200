#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long sum = 0, curr_max = a[0];
        for(int i = 1; i < n; i++){
            if((a[i] > 0 && a[i - 1] > 0) || (a[i] < 0 && a[i - 1] < 0)){
                curr_max = max(curr_max, a[i]);
            }
        }
    }


    return 0;
}
