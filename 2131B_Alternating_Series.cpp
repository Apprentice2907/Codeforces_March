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