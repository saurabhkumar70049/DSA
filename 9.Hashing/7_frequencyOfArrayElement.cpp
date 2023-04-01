#include <bits/stdc++.h>
using namespace std;

// void frequencyElement(vector<int> &vec) { // Time complexity = O(nlogn)
//     sort(vec.begin(), vec.end());
//     int count = 1;
//     for(int i = 0; i < vec.size(); i++) {
//         if(i == vec.size()-1 || vec[i] != vec[i+1] ) {
//             cout << vec[i] << " : " << count <<endl;
//             count = 1;
//         }
//         else {
//             count++;
//         }
//     }
// }

void frequencyElement(vector<int> &vec) {// time complexity = O(n); space complexity = O(n)
    unordered_map<int, int> m;
    for(int i = 0; i < vec.size(); i++) {
        m[vec[i]]++;
    }
    for(auto it : m) {
        cout << it.first << " : " << it.second <<endl;
    }
}

int main() {
    vector<int> vec = {10, 2, 14, 2, 10, 10, 5};
    frequencyElement(vec);
}