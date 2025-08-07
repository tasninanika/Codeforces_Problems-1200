#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int left = 0, right = n - 1;
        int minValue = 1, maxValue = n;

        while(left < right){
            if (a[left] == minValue) {
                ++left;
                ++minValue;
            }
            else if (a[right] == minValue) {
                --right;
                ++minValue;
            }
            else if (a[left] == maxValue) {
                ++left;
                --maxValue;
            }
            else if (a[right] == maxValue) {
                --right;
                --maxValue;
            }
            else {
                break;
            }
        }

        if (left < right) {
            cout << (left + 1) << " " << (right + 1) << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }

    return 0;
}

