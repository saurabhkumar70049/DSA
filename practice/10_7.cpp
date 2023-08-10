#include<bits/stdc++.h>
using namespace std;

// char maxOccurence(string str){
//     unordered_map<char, int> mp;
//     for(char i: str){
//         mp[i]++;
//     }
//     for(auto j : mp){
//         cout << j.first << " : " << j.second <<endl;
//     }
//     int maxOcc = 0;
//     char ans = 'z';
//     for(auto it = mp.begin(); it != mp.end(); it++){
//         if(it->second == maxOcc){
//             if(it->first <= ans){
//                 maxOcc = it->second;
//                 ans = it->first;
//             }           
//         }
//         else if(it->second > maxOcc){
//                 maxOcc = it->second;
//                 ans = it->first;
//         }
//     }
//     return ans;

// }

char maxOccurence(string str){
    vector<int> vec(26);
    for(int i = 0; i < str.length(); i++){
        vec[str[i]-'a']++;
    }
    int j = 0;
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] > vec[j]){
            j = i;
        }
    }
    return (char)(j + 'a');
}

int main() {
    string str;
    getline(cin, str);
    cout << maxOccurence(str);
}