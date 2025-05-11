#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n;

    int c = 0, extra = 0, max_extra = -1;

    while(n--){
        cin >> t;
        if(t == 1){
            c++;
            if(extra > 0){
                extra--;
            }
            else{
                extra++;
                if(extra > max_extra){
                    max_extra = extra;
                }
            }
        }
    }

    return 0;
}
