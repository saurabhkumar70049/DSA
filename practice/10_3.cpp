#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string str){
    string str1 = str;
    reverse(str1.begin(), str1.end());
    return str1 == str ? true : false;
}

int main() {
    string str;
    getline(cin, str);
    cout << palindromeCheck(str);
}