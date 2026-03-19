// Purely maths logic 

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if((x - 2*y) % 3 != 0){
            cout<<"NO\n";
            continue;
        }

        int k = (x - 2*y) / 3;

        if(k < 0){
            cout<<"NO\n";
            continue;
        }

        int min_c = max(0, -y);

        if(2 * min_c <= k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}