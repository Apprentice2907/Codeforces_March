// Claude coded

#include <bits/stdc++.h>
using namespace std;

bool isDerangement(vector<int>& arr) {
    vector<int> s = arr;
    sort(s.begin(), s.end());
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == s[i]) return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> arr = a;
    while (arr.size() > 1) {
        vector<int> s = arr;
        sort(s.begin(), s.end());
        int fixedIdx = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == s[i]) { fixedIdx = i; break; }
        }
        if (fixedIdx == -1) {
            cout << "YES\n" << arr.size() << "\n";
            for (int x : arr) cout << x << " ";
            cout << "\n";
            return;
        }
        arr.erase(arr.begin() + fixedIdx);
    }
    
    // Fallback: find any 2-element derangement (x, y) where x > y
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                cout << "YES\n2\n" << a[i] << " " << a[j] << "\n";
                return;
            }
        }
    }
    
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}