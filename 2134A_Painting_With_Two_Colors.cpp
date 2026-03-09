// Claude coded

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        
        bool blue_sym = (n - b) % 2 == 0;
        bool red_sym = (n - a) % 2 == 0;
        
        // YES if:
        // 1. Both can be placed symmetrically
        // 2. Blue is symmetric and blue >= a (blue can cover red entirely)
        if (blue_sym && (b >= a || red_sym)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}