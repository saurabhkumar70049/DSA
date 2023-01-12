#include <bits/stdc++.h>
using namespace std;

void sub(string str, string str1, int index) {
    int n = str.length();
    if (n == index) {
        cout << str1 << endl;
        return;
    }

    sub (str, (str1 + str[index]), (index + 1 ));
    sub(str, str1, index + 1);
}

int main() {
    cout << "Enter string : " ;
    string str, str1 = "";
    cin >> str;
    sub(str, str1, 0);
    

}