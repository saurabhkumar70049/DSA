// Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

// Example 1:

// Input:
// N = 4
// S = 1111
// Output: 6
// Explanation: There are 6 substrings from
// the given string. They are 11, 11, 11,
// 111, 111, 1111.
// Example 2:

// Input:
// N = 5
// S = 01101
// Output: 3
// Explanation: There 3 substrings from the
// given string. They are 11, 101, 1101.
// Your Task:
// The task is to complete the function binarySubstring() which takes the length of binary string n and a binary string a as input parameter and counts the number of substrings starting and ending with 1 and returns the count.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ |S| ≤ 104

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
       int count = 0;
       for(int i = 0; i < n; i++) {
           if(a[i] == '1'){
               count++;
           }
       }
        
    
        // if(count == 1 || count == 0) {
        //     return 0;
        // }
        // else if(count == 2) {
        //     return 1;
        // }
        // else {
        //     int sum = 0;
            // for(int i = count-1; i >= 1; i--) { // count is n then we should add 1 to n-1, ex. n = 4 answer = 3+2+1(6)
            //     sum += i;                    // sum of 1 to n-1 = n*(n-1)/2
            // }
    //         return sum;
    //     }
        return count*(count-1)/2;
    }

};

//{ Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}