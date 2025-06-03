#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.length();
        int c[4] = {0};

        int left = 0, minLen = n + 1;
        for(int right = 0; right < n; right++){
            c[s[right] - '0']++;

            while(c[1] && c[2] && c[3]){
                minLen = min(minLen, right - left + 1);
                c[s[left] - '0']--;
                left++;
            }
        }

        if(minLen == n + 1){
            cout << 0 << endl;
        }
        else{
            cout << minLen << endl;
        }
    }
    return 0;
}
