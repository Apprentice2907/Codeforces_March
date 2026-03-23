// Claude coded and not understood

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int C = 0;
        bool hasSameAdj = false;
        
        for (int i = 0; i < n; i++) {
            int next = (i + 1) % n;
            if (s[i] != s[next]) C++;
            else hasSameAdj = true;
        }
        
        if (hasSameAdj) cout << C + 1 << "\n";
        else cout << C << "\n";
    }
    return 0;
}