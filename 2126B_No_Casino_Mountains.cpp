// My logic but claude coded

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        int hikes=0;
        int i=0;
        while(i<=n-k){
            int good=0;
            for(int j=i;j<i+k;j++){
                if(a[j]==0) good++;
            }
            if(good==k){
                hikes++;
                i=i+k+1;
            } else {
                i++;
            }
        }
        cout<<hikes<<"\n";
    }
}