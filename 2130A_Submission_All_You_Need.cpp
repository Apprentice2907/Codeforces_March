// My approach 

#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int sum = 0;
        int zeros = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x == 0) zeros++;
        }
 
        cout << sum + zeros << endl;
    }
 
    return 0;
}