#include<bits/stdc++.h>
using namespace std;

// bool checkPalindrome(string str) { // time complexity = O(n)
//     string str1 = str;             // Auxilary Space = O(n)
//     reverse(str.begin(), str.end());
//     if(str1 == str) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

bool checkPalindrome(string str) { // time complexity = O(n)
    int n = str.length();          // auxilary space = O(1)
    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    if(checkPalindrome(str)){
        cout << str << " is palindrome" <<endl;
    }
    else {
        cout << str << " is not palindrome" <<endl;
    }
}