// my logic 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int startr, startc;
        cin >> startr >> startc;

        if(startr == 1 || startc == 1 || (startr == 2 && startc == 2)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}