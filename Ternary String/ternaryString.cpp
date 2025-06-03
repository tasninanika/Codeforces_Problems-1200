#include<iostream>
using namespace std;

int main(){
    string num;
    cin >> num;

    int onesCount = 0;
    string remaining = "";

    for(int i = 0; i < num.size(); i++){
        if(num[i] == '1'){
            onesCount++;
        }
        else{
            remaining.push_back(num[i]);
        }
    }

    int i = 0;
    while(i < remaining.length() && remaining[i] == '0'){
        cout << remaining[i];
        i++;
    }

    while(onesCount--){
        cout << '1';
    }

    while(i < remaining.size()){
        cout << remaining[i];
        i++;
    }

    return 0;
}
