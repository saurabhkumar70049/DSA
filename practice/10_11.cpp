#include<bits/stdc++.h>
using namespace std;

char leftRepeated(string str){
    unordered_set<char> st;
    char ans = '0';
    for(int i = str.length()-1; i >= 0; i--){
        if(st.find(str[i]) != st.end()){
            ans = str[i];
        }
        else {
            st.insert(str[i]);
        }
    }
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    cout << leftRepeated(str);
}