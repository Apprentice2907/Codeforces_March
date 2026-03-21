// My approach 

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool flag = false;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 67) flag = true;
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}