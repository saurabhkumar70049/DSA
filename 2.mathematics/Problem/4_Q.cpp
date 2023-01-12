// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

 

// Example 1:

// Input:
// N = 6
// Output: 1
// Explanation: The only number less than 6 with 
// 3 divisors is 4.
// Example 2:

// Input:
// N = 10
// Output: 2
// Explanation: 4 and 9 have 3 divisors.
 

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function exactly3Divisors() that takes N as input parameter and returns count of numbers less than or equal to N with exactly 3 divisors.

 

// Expected Time Complexity : O(N1/2 * N1/4)
// Expected Auxilliary Space :  O(1)

 

// Constraints :
// 1 <= N <= 109


#include <bits/stdc++.h>
using namespace std;

// void divisor (int n) {  // this method is based upon sieve method and this is one of good method however time complexity is O(n^2)
//     int arr[n+1];
//     for (int i = 0; i <= n; i++) {
//         arr[i] = 2;
//     }
//     // memset(arr, 2, sizeof(arr));   
//     // We can use memset() to set all values as 0 or -1 for integral data types also. It will not work if 
//     // we use it to set as other values. The reason is simple, memset works byte by byte.  
//     for (int i = 2; i <= (n)/2; i++) {
//         for (int j = i+i; j <= n ; j +=i) {
//             arr[j] = arr[j] + 1;
            

//         }
//     }
//     for (int i = 2; i <= n; i++) {
//         if (arr[i] == 3) {
//             cout << i << " ";
//         }
//     }
// }



bool isPrime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x%i == 0) {
            return false;
        }
    }
    return true;
}

void divisor(int n) {
    int count = 0;
    for (int i = 2; i*i <= n; i++) {
        if(isPrime(i)) {
            if(i*i <= n) {
                count++;
            }
        }
    }
    cout << count << endl;
}


int main() {
    cout << "Enter N : ";
    int n;
    cin >> n;
    divisor(n);
    
}