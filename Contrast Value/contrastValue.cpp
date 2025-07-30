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

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        int ans = 1;
        int direction = -1;

        for(int i = 1; i < n; i++){
            int current = direction;

            if (a[i] > a[i - 1]) {
                current = 0;
            }
            else if (a[i] < a[i - 1]) {
                current = 1;
            }
            if (current != direction) {
                ans++;
                direction = current;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

