#include<iostream>
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


    return 0;
}
