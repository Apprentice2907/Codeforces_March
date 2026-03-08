// Clauded coded but understood

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;
        int ones = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') ones++;
            else ones = 0;
            if(ones >= k) { ok = false; break; }
        }
        
        if(!ok) {
            cout << "NO\n";
            continue;
        }
        
        // Assign largest values to '0' positions, smallest to '1' positions
        // 0-positions get values n, n-1, ... (count of 0s values)
        // 1-positions get values 1, 2, ... 
        vector<int> zeros, ones_pos;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') zeros.push_back(i);
            else ones_pos.push_back(i);
        }
        
        vector<int> p(n);
        int val = n;
        for(int idx : zeros) p[idx] = val--;
        val = 1;
        for(int idx : ones_pos) p[idx] = val++;
        
        cout << "YES\n";
        for(int i = 0; i < n; i++) cout << p[i] << " \n"[i==n-1];
    }
    return 0;
}