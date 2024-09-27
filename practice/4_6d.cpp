#include<bits/stdc++.h>
using namespace std;

void subString(string s, string sub, int i){
    if(s.length() == i){
        cout << sub << " ";
        return;
    }

    subString(s, sub+s[i], i+1);
    subString(s, sub, i+1);
}

int main() {
    string s;
    getline(cin, s);
    subString(s, "", 0);
}