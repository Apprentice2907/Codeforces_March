// ChatGPT coded 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        int val = -1;
        bool ok = true;

        for(int x : a) {
            if(x == -1) continue;

            if(val == -1) val = x;
            else if(val != x) {
                ok = false;
                break;
            }
        }

        if(!ok) {
            cout << "NO\n";
            continue;
        }

        if(val == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}