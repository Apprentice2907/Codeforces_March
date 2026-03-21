// Claude coded

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;
        
        vector<long long> a(n);
        long long totalTransfers = 0;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            totalTransfers += (a[i] / x) * y;
        }
        
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long res = a[i] + (totalTransfers - (a[i] / x) * y);
            ans = max(ans, res);
        }
        
        cout << ans << "\n";
    }
    return 0;
}