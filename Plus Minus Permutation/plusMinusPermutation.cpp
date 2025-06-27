#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, x, y;
        cin >> n >> x >> y;

        ll l = lcm(x, y);

        ll common = n / l;
        ll onlyX = n - (n / x) + common;
        ll onlyY = (n / y) - common;

        ll totalSum = n * (n + 1) / 2;
        ll sumX = onlyX * (onlyX + 1) / 2;
        ll sumY = onlyY * (onlyY + 1) / 2;

        ll answer = totalSum - sumX - sumY;
        cout << answer << endl;
    }

    return 0;
}
