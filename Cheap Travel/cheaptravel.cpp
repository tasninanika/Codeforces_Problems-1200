#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost1 = n * a;
    int cost2 = ((n + m - 1) / m) * b;
    int cost3 = (n / m) * b + (n % m) * a;

    int min_cost = min({cost1, cost2, cost3});

    cout << min_cost << endl;

    return 0;
}
