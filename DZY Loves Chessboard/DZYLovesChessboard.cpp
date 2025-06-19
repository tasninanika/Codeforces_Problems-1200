#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    char cell;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> cell;
            if(cell == '.'){
                if((i + j) % 2 == 0){
                    cout << 'B';
                }
                else{
                    cout << 'W';
                }
            }
            else{
                cout << cell;
            }
        }
    }

    return 0;
}
