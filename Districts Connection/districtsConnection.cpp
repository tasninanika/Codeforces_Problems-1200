#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> gang(n);
        map<int, vector<int>> group;
        set<int> unique;

        for(int i = 0; i < n; i++){
            cin >> gang[i];
            group[gang[i]].push_back(i);
            unique.insert(gang[i]);
        }

        if (unique.size() == 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";

            vector<vector<int>> allGroups;
            for (auto x : group) {
                allGroups.push_back(x.second);
            }

            for (int i = 1; i < allGroups.size(); i++) {
                for (int j : allGroups[i]) {
                    cout << allGroups[0][0] + 1 << " " << j + 1 << endl;
                }
            }

            for (int i = 1; i < allGroups[0].size(); i++) {
                cout << allGroups[0][i] + 1 << " " << allGroups[1][0] + 1 << endl;
            }
        }
    }

    return 0;
}
