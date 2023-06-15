// Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.

 

// Example 1:

// Input:
// geeksforgeeks
// forgeeksgeeks
// Output: 
// 1
// Explanation: s1 is geeksforgeeks, s2 is
// forgeeksgeeks. Clearly, s2 is a rotated
// version of s1 as s2 can be obtained by
// left-rotating s1 by 5 units.
 

// Example 2:

// Input:
// mightandmagic
// andmagicmigth
// Output: 
// 0
// Explanation: Here with any amount of
// rotation s2 can't be obtained by s1.
 

// Your Task:
// The task is to complete the function areRotations() which checks if the two strings are rotations of each other. The function returns true if string 1 can be obtained by rotating string 2, else it returns false.

 

// Expected Time Complexity: O(N).
// Expected Space Complexity: O(N).
// Note: N = |s1|.


#include<bits/stdc++.h>
using namespace std;

void swapElement(string &str2, int low, int high) {
    while(low < high) {
        int temp = str2[low];
        str2[low] = str2[high];
        str2[high] = temp;
        low++,
        high--;
    }
}

string rotatedString(string &str2, int i) {
    swapElement(str2, 0, i-1);
    swapElement(str2, i, str2.length()-1);
    swapElement(str2, 0, str2.length()-1);
    cout << str2 <<endl;
    return str2;
}

bool checkRotation(string &str1, string &str2) {
    for(int i = 0; i < str2.length(); i++) {
        if(str2 == rotatedString(str1, 1)){
            return true;
        }
    }
    return false;
}


int main() {
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    cout << checkRotation(str1, str2);
}
 