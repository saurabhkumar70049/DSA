#include <bits/stdc++.h>
using namespace std;

void sub_string(string str, int index, string newstr) {
    if(str.length() == index) {
        cout << newstr << " ";
        return;
    }
    sub_string(str, index+1, newstr + str[index]);
    sub_string(str, index+1, newstr);
}

int main() {
    cout << "Enter String : " ;
    string str;
    getline(cin, str);
    sub_string(str, 0, "");
}