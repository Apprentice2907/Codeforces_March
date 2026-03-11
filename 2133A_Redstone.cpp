#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        unordered_map<int,int> freq;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
 
        bool ok = false;
 
        for (auto &p : freq) {
            if (p.second >= 2) {
                ok = true;
                break;
            }
        }
 
        cout << (ok ? "YES" : "NO") << "\n";
    }
 
    return 0;
}