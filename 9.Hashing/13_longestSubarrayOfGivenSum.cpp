// In this question we find out what is the maximum length of subarray which sum is equal to given number
// ex =  {5, 9, 3, 2, 1, 1, 1}, key = 5 : output = 4 (2, 1, 1, 1)


#include<bits/stdc++.h>
using namespace std;

// int subArray(vector<int> &v, int sum) { //this technique is not applicable on negative values
//     int j = 0, cal=0, maxSize = 0; 
//     for(int i = 0; i < v.size(); i++) {
//         cal += v[i];
//         while(cal > sum) {
//             cal -= v[j];
//             j++;
//         }
//         if(sum == cal) {
//             maxSize = max((i-j+1), maxSize);
//             cout << maxSize << endl;
//             cal -= v[j];
//             j++;
//         }
//     }
//     return maxSize;
// }

int subArray(vector<int> &v, int sum) {
    unordered_map<int, int> m;
    int prefixSum = 0, maxLength = 0;
    for(int i = 0; i < v.size(); i++){
        prefixSum += v[i];
        if(sum == prefixSum) {
            maxLength = i+1;
        }
        if(m.find(prefixSum - sum) == m.end()) {
            m.insert({prefixSum, i});
        }
        else {
            maxLength = max(maxLength, i - m[prefixSum - sum]);
        }
    }
    return maxLength;
}

int main() {
    vector<int> v = {5, 9, 3, 2, 1, 1, 1};
    int sum = 5;
    cout << subArray(v, sum);
}