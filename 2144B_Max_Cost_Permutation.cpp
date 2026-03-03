// my logic but chatGPT coded

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        vector<int> zeros;       // positions where p[i] == 0
        vector<int> missing;     // values not yet in p
        vector<bool> present(n + 1, false);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] != 0) present[p[i]] = true;
        }
        
        for (int i = 0; i < n; i++)
            if (p[i] == 0) zeros.push_back(i);
        
        for (int v = 1; v <= n; v++)
            if (!present[v]) missing.push_back(v);
        
        // Strategy: assign missing values to zero positions
        // but try to avoid placing value (pos+1) at position pos
        // We do this by trying a 1-shift: assign missing[1], missing[2], ..., missing[0]
        // then check which assignment gives a better (wider) unsorted range
        
        int k = zeros.size();
        
        // Helper lambda: given an assignment offset, compute cost
        auto computeCost = [&](int offset) {
            for (int i = 0; i < k; i++) {
                p[zeros[i]] = missing[(i + offset) % k];
            }
            int L = -1, R = -1;
            for (int i = 0; i < n; i++) {
                if (p[i] != i + 1) {
                    if (L == -1) L = i;
                    R = i;
                }
            }
            return (L == -1) ? 0 : R - L + 1;
        };
        
        int ans = 0;
        if (k == 0) {
            // No zeros, just compute cost directly
            int L = -1, R = -1;
            for (int i = 0; i < n; i++) {
                if (p[i] != i + 1) {
                    if (L == -1) L = i;
                    R = i;
                }
            }
            ans = (L == -1) ? 0 : R - L + 1;
        } else {
            // Try offset 0 and offset 1 (shift by 1 to avoid correct placements)
            ans = max(computeCost(0), computeCost(1));
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}