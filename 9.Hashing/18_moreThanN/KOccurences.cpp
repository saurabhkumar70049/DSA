#include<bits/stdc++.h>
using namespace std;

void moreOccurences(vector<int> &vec, int k) {
    unordered_map<int, int> m;
    for(int i = 0; i < vec.size(); i++) {
        if(m.find(vec[i]) != m.end()) {
            m[vec[i]]++;
        }
        else {
            m.insert({vec[i], 1});
        }
    }
    for(auto it = m.begin(); it != m.end(); it++) {
        if(it->second > (vec.size()/k)) {
            cout << it->first <<endl;
        }
    }
}

int main() {
    vector<int> vec = {10,10,30, 10, 20, 30, 40,20};
    int k = 4;
    moreOccurences(vec, k);
}