// My approach but chatGPT coded

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> ans;

        long long p = 10;

        for (int k = 1; k <= 18; k++) {
            long long d = p + 1;

            if (n % d == 0) {
                ans.push_back(n / d);
            }

            if (p > 1e18 / 10) break;
            p *= 10;
        }

        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";
            for (auto x : ans) cout << x << " ";
            cout << "\n";
        }
    }
}