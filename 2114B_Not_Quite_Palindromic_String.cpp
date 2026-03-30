#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt0 = count(s.begin(), s.end(), '0');
        int cnt1 = n - cnt0;

        int total_pairs = n / 2;
        int bad = total_pairs - k;

        if (bad <= min(cnt0, cnt1) &&
            (cnt0 - bad) % 2 == 0 &&
            (cnt1 - bad) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}