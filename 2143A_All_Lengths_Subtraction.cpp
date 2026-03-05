#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int i = 0;
        while (i + 1 < n && p[i] < p[i+1]) i++;
        while (i + 1 < n && p[i] > p[i+1]) i++;

        cout << (i == n - 1 ? "YES" : "NO") << "\n";
    }
}