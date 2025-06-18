#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string a = "";
        string b = "";
        int split = 0;

        for (int i = 0; i < n; i++) {
            char ch = str[i];

            if (ch == '0') {
                a += '0';
                b += '0';
            }
            else if (ch == '2') {
                if (split == 1) {
                    a += '0';
                    b += '2';
                } else {
                    a += '1';
                    b += '1';
                }
            }
            else {
                if (split == 1) {
                    a += '0';
                    b += '1';
                } else {
                    a += '1';
                    b += '0';
                    split = 1;
                }
            }
        }

        cout << a << endl;
        cout << b << endl;
    }

    return 0;
}
