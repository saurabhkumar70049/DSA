//Here we are given an window and a list of element. Need to find out distint element in these window
// windowSize = 4, arr = {10, 20, 20, 10, 30, 40, 10}
// output : 1st window {10, 20, 20, 10} = 2, 2nd window {20, 20, 10, 30} = 3, 3rd window{20, 10, 30, 40} = 4, 4th window {10, 30, 40, 10} = 3

#include<bits/stdc++.h>
using namespace std;

// void distinctElement(vector<int> &vec, int windowSize) {
//     unordered_set<int> s;
    
//     for(int i = 0; i < vec.size()-windowSize+1; i++) {
//         s.insert(vec.begin()+i, vec.begin()+windowSize+i);
//         cout << s.size() << " ";
//         s.erase(s.begin(), s.end());
//     }

// }


void distinctElement(vector<int> &vec, int windowSize) {
    unordered_map<int, int> m;
    for(int i = 0; i < windowSize; i++) {
        if(m.find(vec[i]) != m.end()) {
            m[vec[i]]++;
        }
        else {
            m.insert({vec[i], 1});
        }
    }
    cout << m.size() << " ";
    for(int i = windowSize; i < vec.size(); i++) {
        if(m.find(vec[i]) == m.end()){
            m.insert({vec[i], 1});
            m[vec[i-windowSize]] -= 1;
            if(m[vec[i-windowSize]] == 0) {
                m.erase(m[vec[i-windowSize]]);
            }
        }
        else {
            m[vec[i]]++;
            m[vec[i-windowSize]] -= 1;
            if(m[vec[i-windowSize]] == 0) {
                auto it = m.find(vec[i-windowSize]);
                m.erase(it);
            }
        }
        cout << m.size() << " ";
    }
}

int main() {
    vector<int> vec = {10, 20, 20, 10, 30, 40, 10};
    int windowSize = 4;
    distinctElement(vec, windowSize);
}