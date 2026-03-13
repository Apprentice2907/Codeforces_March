// My approach but chatGPT coded

#include <iostream>
#include <vector>
using namespace std;

int main() {

    long t;
    cin >> t;

    while (t--) {

        long n;
        cin >> n;

        vector<long> a(n);

        // Read first array
        for (long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long total = 1;

        // Read second array and process
        for (long i = 0; i < n; i++) {

            long b;
            cin >> b;

            if (a[i] > b) {
                total = total + (a[i] - b);
            }
        }

        cout << total << endl;
    }

    return 0;
}