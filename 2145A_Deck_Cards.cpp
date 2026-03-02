// My approach but chatGPT coded

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (k == n) {
            cout << string(n, '-') << "\n";
            continue;
        }

        int L = 1, R = n;
        int cnt2 = 0;

        for (char c : s) {
            if (c == '0') L++;
            else if (c == '1') R--;
            else cnt2++;
        }

        string ans(n, '?');

        for (int i = 1; i <= n; i++) {
            if (i < L || i > R) {
                ans[i - 1] = '-';
            } else if (i >= L + cnt2 && i <= R - cnt2) {
                ans[i - 1] = '+';
            } else {
                ans[i - 1] = '?';
            }
        }

        cout << ans << "\n";
    }
    return 0;
}