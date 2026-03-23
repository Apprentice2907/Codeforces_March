// Claude coded

#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        
        int a[200005];
        for (int i = 1; i <= n; i++) cin >> a[i];
        
        if (k >= 2) {
            cout << "YES\n";
        } else {
            // k == 1: j must be the strongest
            int stronger = 0;
            for (int i = 1; i <= n; i++) {
                if (i != j && a[i] > a[j]) stronger++;
            }
            cout << (stronger == 0 ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}