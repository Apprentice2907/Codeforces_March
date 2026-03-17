// My approach but Claude Coded and improved

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for(auto &x : a) scanf("%d", &x);
        
        // Compute prefix minimums
        vector<int> pre(n);
        pre[0] = a[0];
        for(int i = 1; i < n; i++) pre[i] = min(pre[i-1], a[i]);
        
        // Base sum (no operation)
        long long base = 0;
        for(int i = 0; i < n; i++) base += pre[i];
        
        // Suffix sums of pre (benefit of zeroing position j and beyond)
        vector<long long> suf(n+1, 0);
        for(int i = n-1; i >= 0; i--) suf[i] = suf[i+1] + pre[i];
        
        long long ans = base;
        
        // has_free: exists i in [1..j-1] with pre[i] == pre[i-1]
        // (meaning a[i] >= pre[i-1], so i is "free" — adding to a[i] won't worsen prefix mins)
        bool has_free = false;
        
        for(int j = 1; j < n; j++){
            // Add i = j-1 to the candidate set
            if(j >= 2 && pre[j-1] == pre[j-2]) has_free = true;
            
            long long benefit = suf[j]; // prefix mins at j..n-1 all become 0
            
            if(has_free){
                // Free i exists: no extra cost, gain = benefit
                ans = min(ans, base - benefit);
            } else {
                // Best choice is i=0: extra cost = a[j] (only pre[0] increases)
                ans = min(ans, base - benefit + (long long)a[j]);
            }
        }
        
        printf("%lld\n", ans);
    }
    return 0;
}