// Google help

#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int freq[26] = {0};
        for(char c : s) freq[c - 'a']++;
        
        bool found = false;
        for(int i = 1; i <= n-2; i++){
            if(freq[s[i] - 'a'] > 1){
                found = true;
                break;
            }
        }
        
        cout << (found ? "Yes" : "No") << "\n";
    }
    
    return 0;
}