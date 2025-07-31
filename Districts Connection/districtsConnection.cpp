#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> gang(n);
    for(int i = 0; i < n; i++){
        cin >> gang[i];
    }

    int root = -1;
    for(int i = 1; i < n; i++){
        if(gang[i] != gang[0]){
            root = i;
            break;
        }
    }

    if(root == -1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;

        for(int i = 1; i < n; i++){
            if(gang[i] != gang[0]){
                cout << 1 << " ";
            }
        }

        for(int i = 1; i < n; i++){
            if(gang[i] == gang[0]){
                cout << (root + 1) << " " << (i + 1) << endl;
            }
        }
    }


    return 0;
}
