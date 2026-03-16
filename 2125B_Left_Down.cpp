// My approach but little bit google helped

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;

        long long g = __gcd(a, b); //Readymade item

        if (a / g <= k && b / g <= k)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }

    return 0;
}