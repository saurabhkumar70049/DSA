#include <bits/stdc++.h>
using namespace std;

void perm(string str, int i = 0) {
    if (i == str.length() - 1) {
        cout << str << " ";
        return;
    }
    for (int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);
        perm(str, i+1);
        swap(str[j], str[i]);
    }
}

int main() {
    string str;
    cout << "Enter string : ";
    cin >> str;
    perm(str, 0);
}