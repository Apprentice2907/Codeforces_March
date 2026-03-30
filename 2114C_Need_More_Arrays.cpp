#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int count = 0;
        int last = -1e9; 

        for (int i = 0; i < n; i++) {
            if (a[i] > last + 1) {
                count++;
                last = a[i];
            }
        }

        cout << count << "\n";
    }

    return 0;
}