//stringStream is buildin fuction to seperate the all word from string 



#include<bits/stdc++.h>
using namespace std;


void splitString(string str) {
    istringstream ss(str);
    string word;
    while(getline(ss, word, '!')) {
        cout << word <<endl;
    }
}


int main() {
    string str;
    getline(cin, str);
    splitString(str);
}

