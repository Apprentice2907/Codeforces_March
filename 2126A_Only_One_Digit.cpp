// My approach but claude coded 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        string sx = to_string(x);
        
        for(int y=0; y<=x; y++){
            string sy = to_string(y);
            bool found = false;
            for(int i=0; i<sx.size(); i++){
                for(int j=0; j<sy.size(); j++){
                    if(sx[i]==sy[j]) found=true;
                }
            }
            if(found){
                cout<<y<<"\n";
                break;
            }
        }
    }
}