/*
Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  

Example 1:

Input: N = 18
Output: 2
Explanation: Binary representation of 
18 is 010010,the first set bit from the 
right side is at position 2.
Example 2:

Input: N = 12 
Output: 3 
Explanation: Binary representation 
of  12 is 1100, the first set bit 
from the right side is at position 3.
Your Task:
The task is to complete the function getFirstSetBit() that takes an integer n as a parameter and returns the position of first set bit.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 108

*/

#include <bits/stdc++.h>
using namespace std;

int position(int n) {
    for (int i = 1; i <= floor(log2(n) + 1); i++) {
    
        if ((1 << (i-1) & n) != 0) {
            return i;
        }
    }
    return 0;
}


int main() {
    cout << "Enter n :" ;
    int n;
    cin >> n;
    cout << position(n);
}
