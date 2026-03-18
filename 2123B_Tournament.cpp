// Claude coded

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n+1);
        
        for(int i = 1; i <= n; i++) cin >> a[i];
        
        int strength = a[j];
        
        int stronger = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] > strength) stronger++;
        }
        
        if(k == 1){
            if(stronger == 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            if(stronger < k) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}