#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int total = n * (n - 1) / 2;
        vector<int> scores(total);

        for (int i = 0; i < total; i++) {
            cin >> scores[i];
        }

        sort(scores.rbegin(), scores.rend());

        vector<int> result;
        int index = 0;
        int count = n - 1;

        for (int i = 0; i < n - 1; i++) {
            result.push_back(scores[index]);
            index = index + count;
            count = count - 1;
        }

        result.push_back(scores.back());

        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

