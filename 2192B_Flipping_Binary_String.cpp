// My approach 

#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n; string s;
        cin >> n >> s;
        
        vector<int> ones, zeros;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') ones.push_back(i+1);
            else zeros.push_back(i+1);
        }
        
        if(ones.empty()){
            cout << 0 << "\n\n";
        } else if(ones.size() % 2 == 0){
            cout << ones.size() << "\n";
            for(int x : ones) cout << x << " ";
            cout << "\n";
        } else if(zeros.size() % 2 == 1){
            cout << zeros.size() << "\n";
            for(int x : zeros) cout << x << " ";
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}