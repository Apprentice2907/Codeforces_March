#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    long t; 
    scanf("%ld", &t);

    while(t--) {

        long n, k;
        scanf("%ld %ld", &n, &k);

        vector<long> a(n);
        for(long i = 0; i < n; i++) scanf("%ld", &a[i]);

        vector<long> b(k);
        for(long i = 0; i < k; i++) scanf("%ld", &b[i]);

        sort(a.rbegin(), a.rend());  
        sort(b.begin(), b.end());    

        long idx = -1;

        for(long i = 0; i < k; i++) {
            if(idx + b[i] >= n) break;
            idx += b[i];
            a[idx] = 0;             
        }

        long long cost = 0;
        for(long x : a) cost += x;

        printf("%lld\n", cost);
    }
}