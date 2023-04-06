


#include<bits/stdc++.h>
using namespace std;

// int longestSpan(vector<int> &vec1, vector<int> &vec2) {
//     int maxSpan = 0;
//     for(int i = 0; i < vec2.size(); i++) {
//         int sum1 = 0, sum2 = 0;
//         for(int j = i; j < vec2.size(); j++) {
//             sum1 += vec1[j];
//             sum2 += vec2[j];
//             if(sum1 == sum2) {
//                 maxSpan = max(maxSpan, j - i + 1);
//             }
//         }
//     }
//     return maxSpan;
// }


int longestSpan(vector<int> &vec1, vector<int> &vec2) {
    vector<int> vec3(vec1.begin(), vec1.end());
    for(int i = 0; i < vec2.size(); i++) {
        vec3[i] -= vec2[i];
    }
    // for(auto i : vec3) {
    //     cout << i << " ";
    // }
    unordered_map<int, int> m;
    int res = 0, sum = 0;
    for(int i = 0; i < vec3.size(); i++) {
        sum += vec3[i];
        if(sum == 0) {
            res = i+1;
        }
        if(m.find(sum) != m.end()) {
            res = max(res, i - m[sum]);
        }
        else {
            m.insert({sum, i});
        }
    }
    return res;
}

int main() {
    vector<int> vec1 = {0, 1, 0, 0, 0, 1};
    vector<int> vec2 = {1, 0, 0, 1, 0, 1};
    cout << longestSpan(vec1, vec2);
}