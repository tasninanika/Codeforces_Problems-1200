#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long a[n];
        int freq[33] = {0};

        for(int i = 0; i < n; i++){
            cin >> a[i];

            int power = 0;
            while((1LL << power) <= a[i]){
                power++;
            }

            freq[power]++;
        }

        long long ans = 0;

        for(int i = 0; i <= 32; i++){
            if(freq[i] >= 2){
                ans += (1LL * freq[i] * (freq[i] - 1)) / 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

