// Check if a string is Isogram or not
// BasicAccuracy: 63.25%Submissions: 47K+Points: 1
// Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
// Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.

// Example 1:

// Input:
// S = machine
// Output: 1
// Explanation: machine is an isogram
// as no letter has appeared twice. Hence
// we print 1.
// Example 2:

// Input:
// S = geeks
// Output: 0
// Explanation: geeks is not an isogram
// as 'e' appears twice. Hence we print 0.
// Your Task:
// This is a function problem. You only need to complete the function isIsogram() that takes a string as a parameter and returns either true or false.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).
// Note: N = |S|

// Constraints:
// 1 <= |s| <= 103

 

 //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        vector<int> vec(26);
        for(int i = 0; i < s.length(); i++){
            vec[s[i]-'a']++;
        }
        
        for(int i = 0; i < 26; i++) {
            if(vec[i] > 1) {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends