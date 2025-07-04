#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    char allowed[26] = {0};
    for(int i = 0; i < k; i++){
        char ch;
        cin >> ch;

        allowed[ch - 'a'] = 1;
    }

    long long c = 0;
    long long answer = 0;

    for(int i = 0; i < n; i++){
        if(allowed[s[i] - 'a'] == 1){
            c++;
        }
        else {
            answer += (c * (c + 1)) / 2;
            c = 0;
        }
    }

    answer += (c * (c + 1)) / 2;

    cout << answer << endl;

    return 0;
}

