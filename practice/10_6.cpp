#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string str1, string str2){
    int n1 = str1.length(), n2 = str2.length();
    if(n1 != n2) {
        return false;
    }
    unordered_map<char, char> mp;
    for(int i = 0; i < n1; i++){
        if(mp.find(str1[i]) != mp.end()){
            if(mp[str1[i]] != str2[i]){
                return false;
            }
        }
        else {
            vector<char> vec;
            for(auto it : mp){
                vec.push_back(it.second);
            }
            if(find(vec.begin(), vec.end(), str2[i]) != vec.end()){
                return false;
            }
            mp[str1[i]] = str2[i];
        }
    }
    return true;
}

int main(){
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    cout << isomorphic(str1, str2) << endl;
    
}