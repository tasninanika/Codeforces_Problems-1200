#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int x = -1;

        for(int i = n - 1; i > 0; i--){
            if(a[i] > a[i - 1]){
                x = i - 1;
                break;
            }
        }

        int ans = 0;
        if(x != -1){
            int y = -1;
            for(int i = x; i > 0; i--){
                if(a[i] < a[i - 1]){
                    y = i - 1;
                    break;
                }
            }

            if(y != -1){
                ans = y + 1;
            }
            else{
                ans = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

