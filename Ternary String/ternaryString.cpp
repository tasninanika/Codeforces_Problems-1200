#include<bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin >> num;

    int len = num.size(), c = 0;

    string temp = "";
    for(int i=0; i < len; i++)
    {
        if(num[i]=='1'){
            c++;
        }
        else{
            temp.push_back(num[i]);
        }
    }
    int check;
    for(check = -1; check + 1 < temp.size() && temp[check + 1] == '0'; check++){
        cout << temp[check + 1];
    }

    while(c--){
        cout << 1;
    }

    for(; check + 1 < temp.size(); check++){
        cout << temp[check + 1];
    }
