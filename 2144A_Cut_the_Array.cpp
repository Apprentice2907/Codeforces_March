// My logic but ChatGPT coded

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Build prefix sums
        vector<int> pre(n + 1, 0);
        for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i];

        int ansL = 0, ansR = 0;

        // Try all valid l, r pairs: 1-indexed, l < r < n
        for (int l = 1; l < n - 1 && ansL == 0; l++) {
            for (int r = l + 1; r < n && ansL == 0; r++) {
                int s1 = pre[l] % 3;
                int s2 = (pre[r] - pre[l]) % 3;
                int s3 = (pre[n] - pre[r]) % 3;

                bool allSame = (s1 == s2 && s2 == s3);
                bool allDiff = (s1 != s2 && s2 != s3 && s1 != s3);

                if (allSame || allDiff) {
                    ansL = l;
                    ansR = r;
                }
            }
        }

        cout << ansL << " " << ansR << "\n";
    }

    return 0;
}