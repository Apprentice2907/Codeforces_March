// My approach and chatGPT helped

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        if (a > b) {
            if ((a % 2 == 1) && ((a ^ 1) == b))
                cout << y << "\n";
            else
                cout << -1 << "\n";
            continue;
        }

        long long cost = 0;

        while (a < b) {
            if (a % 2 == 0) {
                cost += min(x, y);
                a++;
            } else {
                cost += x;
                a++;
            }
        }

        cout << cost << "\n";
    }

    return 0;
}