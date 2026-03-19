// My approach and coded 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int a1, b1;
        cin >> a1 >> b1;

        int a2, b2;
        cin >> a2 >> b2;

        int A = a1 + a2;
        int B = b1 + b2;

        if (B + k > A)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}





// Kotlin converted code 

fun main() {
    val t = readLine()!!.toInt()

    repeat(t) {
        val k = readLine()!!.toInt()

        val (a1, b1) = readLine()!!.split(" ").map { it.toInt() }
        val (a2, b2) = readLine()!!.split(" ").map { it.toInt() }

        val A = a1 + a2
        val B = b1 + b2

        if (B + k > A)
            println("YES")
        else
            println("NO")
    }
}