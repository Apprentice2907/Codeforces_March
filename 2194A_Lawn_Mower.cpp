// My approach 

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, w;
        cin >> n >> w;
        cout << n - n/w << "\n";
    }
}