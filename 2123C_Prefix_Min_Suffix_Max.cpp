// Claude coded

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> prefix_min(n), suffix_max(n);
        
        prefix_min[0] = a[0];
        for(int i = 1; i < n; i++)
            prefix_min[i] = min(prefix_min[i-1], a[i]);
        
        suffix_max[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--)
            suffix_max[i] = max(suffix_max[i+1], a[i]);
        
        int global_min = prefix_min[n-1];
        int global_max = suffix_max[0];
        
        string ans(n, '0');
        for(int i = 0; i < n; i++) {
            // Condition 1: global minimum
            if(a[i] == global_min) { ans[i] = '1'; continue; }
            // Condition 2: global maximum
            if(a[i] == global_max) { ans[i] = '1'; continue; }
            // Condition 3: a[i] is max of suffix from i, with left side existing
            // (prefix-min left to something < a[i], then suffix-max [left,a[i]] = a[i])
            if(suffix_max[i] == a[i] && i > 0) { ans[i] = '1'; continue; }
            // Condition 4: a[i] is min of prefix up to i, with right side existing
            // (suffix-max right to something > a[i], then prefix-min [a[i],right] = a[i])
            if(prefix_min[i] == a[i] && i < n-1) { ans[i] = '1'; continue; }
        }
        
        cout << ans << "\n";
    }
    return 0;
}