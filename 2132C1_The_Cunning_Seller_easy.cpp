// ChatGPT coded but understood

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<long long> p3(20);
    p3[0] = 1;
    for(int i=1;i<20;i++)
        p3[i] = p3[i-1] * 3;

    while(t--) {
        long long n;
        cin >> n;

        long long ans = 0;
        int i = 0;

        while(n > 0) {
            int d = n % 3;

            if(d) {
                long long cost;
                if(i == 0)
                    cost = 3;
                else
                    cost = p3[i+1] + 1LL * i * p3[i-1];

                ans += d * cost;
            }

            n /= 3;
            i++;
        }

        cout << ans << "\n";
    }
}