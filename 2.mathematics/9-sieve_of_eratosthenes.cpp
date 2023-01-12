/*
The sieve of Eratosthenes is one of the most efficient ways to find all prime numbers
smaller than n when n is smaller than 10 million 

Let us take an example when n = 50.
*/
#include<bits/stdc++.h>
using namespace std;

void sieve(int x) {   // time complexity = O(n * log(log n))
    bool arr[x+1];
    memset(arr, true, sizeof(arr)); //Memset() is a C++ function. It copies a single character for a specified number of times to an object. It is defined in <cstring> header file.

    for (int i = 2; i*i <= x; i++) {
        if (arr[i] == true) {
            for (int j = i*i; j <= x; j += i) {
                arr[j] = false;
            }
        }
    }
    for (int i = 2; i <= x; i++) {
        if (arr[i]) {
            cout << i << " ";
        }
    }
}

/*void sieve(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}*/

int main() {
    cout << "Enter the number : ";
    int x;
    cin >> x;
    sieve(x);
}