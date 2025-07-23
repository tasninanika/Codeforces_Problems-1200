#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, time;

    while(cin >> n >> time){
        vector<long long> a(n), b(n), v(n);
        long long min_time = 0, max_time = 0, sum_time = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];

            min_time += a[i];
            max_time += b[i];
            v[i] = a[i];
            sum_time += a[i];
        }

        if(min_time <= time && time <= max_time){
            cout << "YES\n";

            for(int i = 0; i < n && sum_time < time; i++){
                while (v[i] < b[i] && sum_time < time) {
                    v[i]++;
                    sum_time++;
                }
            }

            for (int i = 0; i < n; i++) cout << v[i] << " ";
            cout << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}

