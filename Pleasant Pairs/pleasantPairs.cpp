#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int size = 2 * n + 1;
        vector<int> ar(size, 1e18);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            ar[x] = i;
        }

        int c = 0;

        for (int i = 3; i < size; i++) {
            for (int j = 1; j * j < i; j++) {
                if (i % j == 0) {
                    int k = i / j;

                    if (ar[j] + ar[k] == i) {
                        c++;
                    }
                }
            }
        }

        cout << c << endl;
    }

    return 0;
}
