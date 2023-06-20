// Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

// Example 1:

// Input:
// str = testsample
// Output: e
// Explanation: e is the character which
// is having the highest frequency.
// Example 2:

// Input:
// str = output
// Output: t
// Explanation:  t and u are the characters
// with the same frequency, but t is
// lexicographically smaller.
// Your Task:
// The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).
// Note: N = |s|

// Constraints:
// 1 ≤ |s| ≤ 100


#include<bits/stdc++.h>
using namespace std;

char maxOccurence(string str) {
    vector<char> vec(26);
    for(char i : str) {
        vec[i - 'a']++;
    }
    int j = 0;
    for(int i = 1; i < vec.size(); i++) {
        if(vec[j] < vec[i]) {
            j = i;
        }
    }
    return char(j+'a');
}

// char maxOccurence(string str) {
//         unordered_map<char, int> occurence;
//         for(int i = 0; i < str.length(); i++) {
//             occurence[str[i]]++;
//         }
//         auto m = occurence.begin();
//         int maxValue = m->second;
//         char ans = occurence.begin()->first;
       
        
//         for(auto it : occurence) {
//             if(it.second > maxValue){
//                 ans = it.first;
//                 maxValue = it.second;
//             }
//             else if(it.second == maxValue) {
//                 if(ans > it.first) {
//                     ans = it.first;
//                     maxValue = it.second;
//                 }
//             }
//         }
//         return ans;
// }


int main() {
    string str;
    getline(cin, str);
    cout << maxOccurence(str);
}