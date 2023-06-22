#include<bits/stdc++.h>
using namespace std;

// string reverseString(string str){
//     // cout << str << " " << str.length() <<endl;
//     vector<string> vec;
//     string ans = "";
//     for(int i = 0; i < str.length()+1; i++) {
//         if(str[i] != ' ' && i != str.length()){
//            ans += str[i];
//         }
//         else {
//             vec.push_back(ans);
//             ans = "";
//         }
//     }
    
//     for(int i = vec.size()-1; i >= 0; i--) {
//         if(i == 0) {
//             ans += vec[i];
//         }
//         else {
//             ans += vec[i];
//             ans += " ";
//         }
//     }
//     return ans;
// }


void reverseCharacter(string &str, int start, int end) {
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

string reverseString(string str) {
    int n = str.length();
    int start = 0;
    for(int end = 0; end < n; end++) {
        if(str[end] == ' ') {
            reverseCharacter(str, start, end-1);
            start = end+1;
        }
    }
    reverseCharacter(str, start, n-1);
    reverseCharacter(str, 0, n-1);
    return str;
}


int main() {
    string str;
    getline(cin, str);
    
    cout << reverseString(str) << endl;
}