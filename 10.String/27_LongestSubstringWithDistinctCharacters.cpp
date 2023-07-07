#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string str){
    unordered_map<char, int> m = {make_pair(str[0], 0)};
    int indexStart = 0, count = 1, maxCount = 1;
    for(int i = 1; i < str.length(); i++){
        auto it = m.find(str[i]);
        if(it != m.end()){
            if(indexStart <= it->first){
                maxCount = max(maxCount, count);
                count = count - it->second;
                indexStart = it->second + 1;

            }
            m[str[i]] = i;
        }
        else {
            count++;
            m.insert(make_pair(str[i], i));
        }
    }
    maxCount = max(maxCount, count);
    return maxCount;

}

int main(){
    string str;
    getline(cin, str);
    cout << longestSubstring(str);
}