/*
Remove common characters and concatenate
BasicAccuracy: 30.78%Submissions: 54K+Points: 1
Mega Job-A-Thon for Freshers & Professionals starting soon. Apply Now  

Given two strings s1 and s2. Modify both the strings such that all the common characters of s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.
Note: If all characters are removed print -1.

Example 1:

Input:
s1 = aacdb
s2 = gafd
Output: cbgf
Explanation: The common characters of s1
and s2 are: a, d. The uncommon characters
of s1 and s2 are c, b, g and f. Thus the
modified string with uncommon characters
concatenated is cbgf.
Example 2:

Input:
s1 = abcs
s2 = cxzca
Output: bsxz
Explanation: The common characters of s1
and s2 are: a,c. The uncommon characters
of s1 and s2 are b,s,x and z. Thus the
modified string with uncommon characters
concatenated is bsxz.
Your Task:
The task is to complete the function concatenatedString() which removes the common characters, concatenates, and returns the string. If all characters are removed then return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |Length of Strings|

Constraints: 
1 <= |Length of Strings| <= 104

*/

//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        unordered_map<char,int> m;
        for(int i = 0; i < s2.length(); i++) {
            m[s2[i]] = 1;
        }
        string ans = "";
        for(int i = 0; i < s1.length(); i++){
            if(m.find(s1[i]) != m.end()){
                m[s1[i]] = 2;
            }
            else{
                ans += s1[i];
            }
        }
        for(int i = 0; i < s2.length(); i++) {
            if(m[s2[i]] == 1){
                ans += s2[i];
            }
        }
        if(ans == ""){
            return "-1";
        }
        return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends