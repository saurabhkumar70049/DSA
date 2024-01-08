#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string str1 = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 97 && s[i] <= 122) {
            str1 += s[i];
        }
        else if(s[i] >= 65 && s[i] <= 90){
            str1 += s[i]+32;
        }
    }
    cout << str1 <<endl;
    string str2 = str1;
    reverse(str1.begin(), str1.end());
    return (str1 == str2)? true : false;
}

int main() {
    string str;
    getline(cin, str);
    cout<< isPalindrome(str) << endl;
}