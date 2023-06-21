// Minimum indexed character
// EasyAccuracy: 54.06%Submissions: 70K+Points: 2
// Mega Job-A-Thon for Freshers & Professionals starting soon. Apply Now  

// Given a string str and another string patt. Find the minimum index of the character in str that is also present in patt.


// Example 1:

// Input:
// str = geeksforgeeks
// patt = set
// Output: 1
// Explanation: e is the character which is
// present in given str "geeksforgeeks"
// and is also presen in patt "set". Minimum
// index of e is 1. 
// Example 2:

// Input:
// str = adcffaet
// patt = onkl
// Output: -1
// Explanation: There are none of the
// characters which is common in patt
// and str.

// Your Task:
// You only need to complete the function minIndexChar() that returns the index of answer in str or returns -1 in case no character of patt is present in str.


// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).


// Constraints:
// 1 ≤ |str|,|patt| ≤ 105 
// 'a' <= stri, patti <= 'z'



//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    // int minIndexChar(string str, string patt)
    // {
    //     vector<int> vec(256);
    //     for(int i = 0; i < patt.length(); i++) {
    //         vec[patt[i]]++;
    //     }
    //     for(int i = 0; i < str.length(); i++) {
    //         if(vec[str[i]] != 0) {
                
    //             return i;
    //         }
    //     }
    //     return -1;
    // }


    int minIndexChar(string str, string patt){
        unordered_map<char, int> m;
        for(int i = 0; i < str.length(); i++) {
            if(m.find(str[i]) == m.end()) {
                m[str[i]] = i;
            }
        }

        int ans = INT_MAX;

        for(int i = 0; i < patt.length(); i++) {
            if(m.find(patt[i]) != m.end() && m[patt[i]] < ans) {
                ans = m[patt[i]];
            }
        }
        return (ans == INT_MAX)? -1 : ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends