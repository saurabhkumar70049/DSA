//

#include<bits/stdc++.h>
using namespace std;

// int longestSubArray(vector<int> &vec) { // time complexity = O(n^2)
//     int maxSubarray = 0;
//     for(int i = 0; i < vec.size(); i++) {
//         int count0 = 0, count1 = 0;
//         for(int j = i; j < vec.size(); j++) {
//             if(vec[j] == 0) {
//                 count0++;
//             }
//             else {
//                 count1++;
//             }
//             if(count0 == count1) {
//                 maxSubarray = max(maxSubarray, count0+count1);
//             }
//         }
//     }
//     return maxSubarray;
// }

int longestSubArray(vector<int> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] == 0) {
            vec[i] = -1;
        }
    }
    unordered_map<int, int> m; 
    int res = 0, sum = 0;
    for(int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if(sum == 0) {
            res = i+1;
        }
        if(m.find(sum) == m.end()){
            m.insert({sum, i});
        }
        else {
            res = max(res, (i - m[sum]));
        }
        
        
    }
    return res;
}

int main() {
    vector<int> vec = {1,1,0,1,0,0,1,1,0};
    cout << longestSubArray(vec);
}