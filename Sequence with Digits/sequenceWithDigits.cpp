#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, k;
        cin >> a >> k;

        for(int i = 1; i < k; i++){
            string s = to_string(a);
            int min_digit = *min_element(s.begin(), s.end()) - '0';
            int max_digit = *max_element(s.begin(), s.end()) - '0';

            if(min_digit == 0){
                break;
            }
            a += min_digit * max_digit;
        }

        cout << a << endl;
    }

    return 0;
}

