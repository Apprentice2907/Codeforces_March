// My aprroach but claude coded

#include<bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main(){
    
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int count = 0;
        for(int y = x+1; y <= x+130; y++) {
            if(y - digitSum(y) == x)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}