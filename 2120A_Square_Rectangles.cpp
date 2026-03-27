// my approach but ChatGPT Coded

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        int area = l1*b1 + l2*b2 + l3*b3;
        int s = sqrt(area);

        if (s * s != area) {
            cout << "NO\n";
            continue;
        }

        bool ok = false;

        // Case 1: All in one row
        if (b1 == s && b2 == s && b3 == s && l1 + l2 + l3 == s)
            ok = true;

        // Case 2: All in one column
        if (l1 == s && l2 == s && l3 == s && b1 + b2 + b3 == s)
            ok = true;

        // Case 3: l1 on top
        if (l1 == s) {
            int rem_h = s - b1;
            if (rem_h > 0) {
                // Check if l2 + l3 = s and both heights = rem_h
                if (b2 == rem_h && b3 == rem_h && l2 + l3 == s)
                    ok = true;
            }
        }

        // Case 4: b1 on left
        if (b1 == s) {
            int rem_w = s - l1;
            if (rem_w > 0) {
                // Check if b2 + b3 = s and both widths = rem_w
                if (l2 == rem_w && l3 == rem_w && b2 + b3 == s)
                    ok = true;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}