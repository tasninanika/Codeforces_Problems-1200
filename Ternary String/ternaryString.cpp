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
    }

    return 0;
}
