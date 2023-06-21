//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    // char nonrepeatingCharacter(string s)
    // {
    //    char ans = '$';
    //    vector<int> vec(27);
    //    for(int i = s.length()-1; i >= 0; i--) {
    //        if(vec[s[i]-'a'] == 0) {
    //            vec[s[i]-'a']++;
    //            ans = s[i];
    //        }
    //        else {
    //            vec[s[i]-'a']++;
    //        }
    //    }
       
    //    return ans;
       
    // }

    char nonrepeatingCharacter(string s){
        vector<int> vec(256);
        int j = -1;
        for(int i = s.length()-1; i >= 0; i--) {
            if(vec[s[i]-'a']== 0) {
                vec[s[i]-'a']++;
                j = i;
            }
            else {
                vec[s[i]-'a']++;
            }
        }
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends