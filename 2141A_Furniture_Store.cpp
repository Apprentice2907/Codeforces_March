// My approach

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> never;
        int rmin = INT_MAX;
        
        for(int i = 0; i < n; i++){
            if(a[i] >= rmin)
                never.push_back(i + 1);
            else
                rmin = a[i];
        }
        
        cout << never.size() << "\n";
        for(int idx : never) cout << idx << " ";
        cout << "\n";
    }
    return 0;
}






// Kotlin converted

fun main() {
    val t = readLine()!!.trim().toInt()
    repeat(t) {
        val n = readLine()!!.trim().toInt()
        val a = readLine()!!.trim().split(" ").map { it.toInt() }
        
        val neverOrdered = mutableListOf<Int>()
        var runningMin = Int.MAX_VALUE
        
        for (i in 0 until n) {
            if (a[i] >= runningMin)
                neverOrdered.add(i + 1)
            else
                runningMin = a[i]
        }
        
        println(neverOrdered.size)
        println(neverOrdered.joinToString(" "))
    }
}