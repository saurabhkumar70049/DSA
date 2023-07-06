#include<bits/stdc++.h>
using namespace std;

// bool zeroSum(vector<int> &vec) {
//     for(int i = 0; i < vec.size(); i++) {
//         int sum = 0;
//         for(int j = i; j < vec.size(); j++) {
//             sum += vec[j];
//             if(sum == 0) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }


bool zeroSum(vector<int> &vec) {
    unordered_set<int> s; 
    int prefixSum = 0;
    for(int i = 1; i < vec.size(); i++) {
        prefixSum += vec[i-1];
        if(s.find(prefixSum) != s.end()) {
            return true;
        }
        else if(prefixSum == 0) {  // this condition will be true when we have zero sum from 0th index to someWhere
            return true;
        }
        else {
            s.insert(prefixSum);
        }
        
    }
    return false;
}

int main() {
    vector<int> vec = {8, 3, 10, -7, -3, 18};
    cout << zeroSum(vec);
}