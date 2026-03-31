#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int x = stoi(s);  

        int root = sqrt(x);

        if (root * root == x) {
            cout << 0 << " " << root << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}