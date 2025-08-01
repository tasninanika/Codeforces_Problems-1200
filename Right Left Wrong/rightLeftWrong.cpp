#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    string s;
    cin >> s;

    long long ans = 0;
    int l = 0, r = n - 1;
    while(l < r){
      while(l < n && s[l] == 'R'){
        l++;
      }
      while(r >= 0 && s[r] == 'L'){
        r--;
      }

      if(l < r){
        for(int i = l; i <= r; i++){
            if(s[i] == 'R'){
                for(int j = i; j <= r; j++){
                   if(s[j] == 'L'){
                        ans += a[j] - a[l];
                        l = j + 1;
                        r = j-1;
                        break;
                    }
                }
                break;
            }
        }

      }


    }
    cout << ans << endl;
  }
  return 0;
}
