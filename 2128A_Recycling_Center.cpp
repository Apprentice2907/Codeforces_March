// My approach and coded too but wrong code 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        long long c;
        cin >> n >> c;

        int count = 0;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > c) count++;
        }

        cout << count << endl;
    }

    return 0;
}






// Correct logic and approach too

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);
        for(auto &x : a) cin >> x;

        vector<long long> deadline;

        for(int i = 0; i < n; i++) {
            if(a[i] > c) continue;

            long long ratio = c / a[i];
            long long d = log2(ratio);
            deadline.push_back(d);
        }

        sort(deadline.begin(), deadline.end());

        int time = 0;
        int free_destroy = 0;

        for(auto d : deadline) {
            if(time <= d) {
                free_destroy++;
                time++;
            }
        }

        cout << n - free_destroy << "\n";
    }
}