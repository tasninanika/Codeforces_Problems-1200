#include<iostream>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost1 = n * a;
    int cost2 = ((n + m - 1) + b);
    int cost3 = (n / m) * b + (n % m) * a;

    return 0;
}
