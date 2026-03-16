// My approach and logic but wrong 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 0; i + 2 < n; i++) {

            // check FFT
            if (s[i] == 'F' && s[i+1] == 'F' && s[i+2] == 'T') {
                swap(s[i+1], s[i+2]);
            }

            // check NTT
            if (s[i] == 'N' && s[i+1] == 'T' && s[i+2] == 'T') {
                swap(s[i], s[i+1]);
            }
        }

        cout << s << "\n";
    }

    return 0;
}









// Correct code by chatGPT 

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int f = 0, n = 0, tt = 0;

        for (char c : s) {
            if (c == 'F') f++;
            else if (c == 'N') n++;
            else if (c == 'T') tt++;
        }

        // print T first
        while (tt--) cout << 'T';

        // then N
        while (n--) cout << 'N';

        // then F
        while (f--) cout << 'F';

        // print remaining letters
        for (char c : s) {
            if (c != 'F' && c != 'N' && c != 'T')
                cout << c;
        }

        cout << "\n";
    }

    return 0;
}








// Crazy logic but chatGPT coded and time limit also exceeded

#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

bool difficult(string &s) {
    if (s.find("FFT") != string::npos) return true;
    if (s.find("NTT") != string::npos) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    random_device rd;
    mt19937 g(rd());

    while (t--) {
        string s;
        cin >> s;

        while (difficult(s)) {
            shuffle(s.begin(), s.end(), g);
        }

        cout << s << "\n";
    }

    return 0;
}