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
    }

    return 0;
}
