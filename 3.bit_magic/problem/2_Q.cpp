// Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

// Example 1: 

// Input: M = 11, N = 9
// Output: 2
// Explanation: Binary representation of the given 
// numbers are: 1011 and 1001, 
// 2nd bit from right is different.
// Example 2:

// Input: M = 52, N = 4
// Output: 5
// Explanation: Binary representation of the given 
// numbers are: 110100 and 0100, 
// 5th-bit from right is different.
// User Task:
// The task is to complete the function posOfRightMostDiffBit() which takes two arguments m and n and returns the position of first different bits in m and n. If both m and n are the same then return -1 in this case.

// Expected Time Complexity: O(max(log m, log n)).
// Expected Auxiliary Space: O(1).

// Constraints:
// 0 <= M <= 109
// 0 <= N <= 109

#include <bits/stdc++.h>
using namespace std;

int diff(int M, int N) {
    
    int r = M^N;
    //cout << r << endl;
    for (int i = 1; i <= floor(log2(r) + 1); i++) {
        if (((1 << (i-1)) & r) != 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    cout << "Enter M and N : " ;
    int M, N;
    cin >> M >> N;
    cout << diff(M, N);
}