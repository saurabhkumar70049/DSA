// Case-specific Sorting of Strings
// MediumAccuracy: 69.88%Submissions: 51K+Points: 4
// Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
// Given a string S consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

// Example 1:

// Input:
// N = 12
// S = defRTSersUXI
// Output: deeIRSfrsTUX
// Explanation: Sorted form of given string
// with the same case of character as that
// in original string is deeIRSfrsTUX
// Example 2:

// Input:
// N = 6
// S = srbDKi
// Output: birDKs
// Explanation: Sorted form of given string
// with the same case of character will
// result in output as birDKs.
// Your Task:
// You only need to complete the function caseSort that takes a string str and length of the string n and returns sorted string.

// Expected Time Complexity: O(Nlog(N)).
// Expected Auxiliary Space: O(N).

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string str1 ="", str2 = "";
        for(int i = 0; i < n; i++) {
            if(int(str[i]) < 97) {
                str1 += str[i]; //upperCase
            }
            else {
                str2 += str[i]; //LowerCase
            }
        }
        // cout << str1 << " " << str2 <<endl;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        int n1 = 0, n2 = 0;
        
        for(int i = 0; i < n; i++) {
            if(int(str[i]) < 97) {
                str[i] = str1[n1];
                n1++;
            }
            else {
                str[i] = str2[n2];
                n2++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends