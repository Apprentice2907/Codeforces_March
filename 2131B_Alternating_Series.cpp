// My approach and coded 

#include <iostrream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        for(int i = 1; i <= n; i++){
            if(i % 2) cout << -1 << " ";
            else cout << 3 << " ";
        }
        cout << "\n";
    }
}





// Correct logic and code

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0)
                a[i] = -1;
            else
                a[i] = 3;
        }

        if(n % 2 == 0)
            a[n-1] = 2;

        for(int x : a)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}