// Given an integer N. Find the number of digits that appear in its factorial. 
// Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
 

// Example 1:

// Input: N = 5
// Output: 3
// Explanation: Factorial of 5 is 120.
// Number of digits in 120 is 3 (1, 2, and 0)
 

// Example 2:

// Input: N = 120
// Output: 199
// Explanation: The number of digits in
// 120! is 199

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function digitsInFactorial() that takes N as input parameter and returns number of digits in factorial of N.


// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)


// Constraints:
// 1 ≤ N ≤ 105


#include <bits/stdc++.h>
using namespace std;

// int cal(int arr[], int arr_size, int i) {
//     int carry = 0, mult;
//     for (int j = 0; j < arr_size; j++) {
//         mult = i*arr[j] + carry;
//         arr[j] = mult%10;
//         carry = mult/10;

//     }
//     while(carry) {
//         arr[arr_size] = carry%10;
//         arr_size += 1;
//         carry /= 10;
//     }
//     return arr_size;
// }

// void fact(int n) {
//     int arr[500];
//     arr[0] = 1;
//     int arr_size = 1;
//     for (int i = 1; i <= n; i++) {
//         arr_size = cal(arr, arr_size, i);
//     }
//     return arr_size;
// }


double fact(int n) {
    double sum = 0;
    for (int i = 2; i <= n; i++) {
        sum += log10(i);
    }
    return floor(sum) + 1;
}


int main() {
    cout << "Enter number : ";
    int n;
    cin >> n;
    cout << fact(n);
}