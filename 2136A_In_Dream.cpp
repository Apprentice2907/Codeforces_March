// Claude coded but undestood

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int r1 = a, k1 = b;
        int r2 = c - a, k2 = d - b;

        bool firstHalf = max(r1, k1) <= 2 * (min(r1, k1) + 1);
        bool secondHalf = max(r2, k2) <= 2 * (min(r2, k2) + 1);

        if(firstHalf && secondHalf)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}