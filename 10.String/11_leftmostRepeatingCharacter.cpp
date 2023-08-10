//Find out the left most repeating element 
// ex. input : acdrcdr , output : c

#include<bits/stdc++.h>
using namespace std;

int leftmostRepeating(string str) {
    vector<int> vec(256);
    int ans = -1;
    vec[str[str.length()-1]]++;
    for(int i = str.length()-2; i >= 0; i--) {
        if(vec[str[i]] != 0) {
            vec[str[i]]++;
            ans = i;
        }
        else {
            vec[str[i]]++;
        }
    } 
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    cout << leftmostRepeating(str);
}