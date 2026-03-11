// My logic but claude helped

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> g(n);
    for(auto &x : g) cin >> x;
    
    sort(g.begin(), g.end(), greater<long long>());
    
    long long ans = 0;
    for(int i = 0; i < n; i += 2)
        ans += g[i];
    
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}