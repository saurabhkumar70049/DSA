// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

// Example 1:

// Input: N = 4
// Output: 5
// Explanation:
// For numbers from 1 to 4.
// For 1: 0 0 1 = 1 set bits
// For 2: 0 1 0 = 1 set bits
// For 3: 0 1 1 = 2 set bits
// For 4: 1 0 0 = 1 set bits
// Therefore, the total set bits is 5.
// Example 2:

// Input: N = 17
// Output: 35
// Explanation: From numbers 1 to 17(both inclusive), 
// the total number of set bits is 35.

// Your Task: The task is to complete the function countSetBits() that takes n as a parameter and returns the count of all bits.

// Expected Time Complexity: O(log N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 108



#include<bits/stdc++.h>
using namespace std;

// int count_bit1(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     return 1 + count_bit1(n & (n-1));
// }

// int count_bit(int n) {
//     int ans = 0;
//     while(n > 0) {
//         ans += count_bit1(n);
//         n--;
//     }
//     return ans;
// }

int arr[256];

void inititalize() {
    arr[0] = 0;
    for (int i = 1; i < 256; i++) {
        arr[i] = (i & 1) + arr[i/2];
    }
    
}
int count_bit(int n) {
    if (n == 1) {
        return 1;
    }
    return (arr[n & 0xff] + arr[(n >> 8) & 0xff] + arr[(n >> 16) & 0xff] + arr[(n >> 24) & 0xff]) + count_bit(n-1);
}

int main() {
    inititalize();
    int n;
    cin >> n;
    cout << count_bit(n);
}