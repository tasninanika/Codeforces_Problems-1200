#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while(cin >> n){
        vector<string> words;

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            words.push_back(s);
        }

        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });

        bool valid = true;
        for (int i = 0; i < n - 1; ++i) {
            if (words[i + 1].find(words[i]) == string::npos) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "YES" << endl;
            for (int i = 0; i < n; ++i) {
                cout << words[i] << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

