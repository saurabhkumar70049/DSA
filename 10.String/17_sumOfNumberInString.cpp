/*
Sum of numbers in string
BasicAccuracy: 63.01%Submissions: 45K+Points: 1
Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given a string str containing alphanumeric characters. The task is to calculate the sum of all the numbers present in the string.

Example 1:

Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24.
Example 2:

Input:
str = geeks4geeks
Output: 4
Explanation: 4 is the only number, so the
sum is 4.
Your Task:
The task is to complete the function findSum() which finds and returns the sum of numbers in the string.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= length of the string <= 105
Sum of Numbers <= 105
*/


//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    // int findSum(string str)
    // {
    // 	string str1 = "";
    // 	int sum = 0;
    // 	for(int i = 0; i < str.length(); i++) {
    // 	    if(int(str[i]) >= 48 && int(str[i]) <= 57){
    // 	        str1 += str[i];
    // 	    }
    // 	    else {
    // 	        if(str1 != "") {
    // 	            sum += stoi(str1);
    // 	            str1 = "";
    // 	        }
    // 	    }
    // 	}
        
    //     if(str1 != "") {
    // 	    sum += stoi(str1);
    // 	}
    // 	return sum;
    	
    // }

	int findSum(string str) {
		string temp = "";
		int sum = 0;
		for(int i = 0; i < str.length(); i++) {
			if(isdigit(str[i])){
				temp += str[i];
				
			}
			else if(temp != "") {
				sum += int(std::stoi(temp));
				temp = "";
			}
		}
		if(temp != ""){
			sum += int(std::stoi(temp));
		}
		return sum;
	}
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends