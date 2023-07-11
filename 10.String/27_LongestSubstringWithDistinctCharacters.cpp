#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string str){
    unordered_map<char, int> m = {make_pair(str[0], 0)};
    int start = 0, maxCount = 1;
    for(int end = 1; end < str.length(); end++){
        auto it = m.find(str[end]);
        if(it != m.end()){
            start = max(start, m[str[end]] + 1);
        }
        m[str[end]] = end;
        maxCount = max(maxCount, end-start+1);
        cout << str[end] << " : " << maxCount << endl;
    }
    
    return maxCount;

}


// int longestSubstring(string str){
//     unordered_set<char> s;
 
//     int len = 0;
//     int i = 0;
//     int maxLength = 0;
//     while(i < str.length()){
//         if(s.find(str[i]) == s.end()){
//             s.insert(str[i]);
//             len++;
//             i++;
//             if(len > maxLength){
//                 maxLength = len;
//             }
//         }
//         else {
//             if(len == 1){
//                 i++;
//             }
//             else {
//                 s.clear();
//                 i = i - len + 1;
//                 len = 0;
//             }
            
//         }
//     }
//     return maxLength;
// }


int main(){
    string str;
    getline(cin, str);
    cout << longestSubstring(str);
}