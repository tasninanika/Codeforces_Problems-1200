#include<iostream>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, q;
        cin >> n >> q;

        ll arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll preSum[n];
        ll preGreater[n];

        for(int i = 0; i < n; i++){
            if(i == 0){
                preSum[i] = arr[i];
                preGreater[i] = arr[i];
            }
            else{
                preSum[i] = preSum[i - 1] + arr[i];
                preGreater[i] = max(preGreater[i - 1], arr[i]);
            }
        }

        while(q--){
            ll k;
            cin >> k;

            ll low = 0, high = n - 1, pos = -1;

            while(low <= high){
                ll mid = low + (high - low) / 2;

                if(preGreater[mid] <= k){
                    pos = mid;
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }

            if(pos == -1){
                cout << 0 << " ";
            }

        }
    }

    return 0;
}
