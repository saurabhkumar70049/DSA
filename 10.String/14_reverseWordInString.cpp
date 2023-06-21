#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    vector<string> vec;
    int j = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != ' '){
            vec[j] += str[i];
        }
        else {
            j++;
        }
    }
    for(auto i : vec) {
        cout << i << " ";
    }
    reverse(vec.begin(), vec.end());
    string ans = "";
    for(int i = 0; i < vec.size(); i++) {
        if(i == vec.size()-1) {
            ans += vec[i];
        }
        else {
            ans += vec[i];
            ans += " ";
        }
    }
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    
    cout << reverseString(str) << endl;
}