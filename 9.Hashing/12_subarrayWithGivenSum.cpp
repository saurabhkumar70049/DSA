// arr = {-2, -8, 3, 9, -2, 11}, sum = 21
// output = true(3,9,-2,11)

#include<bits/stdc++.h>
using namespace std;

// bool subArraySum(vector<int> &v, int sum) {   // this technique is not working with negative values
//     int j = 0, cal=0; 
//     for(int i = 0; i < v.size(); i++) {
//         cal += v[i];
//         while(cal > sum) {
//             cal -= v[j];
//             j++;
//         }
//         if(sum == cal) {
//             return true;
//         }
//     }
//     return false;
// }


bool subArraySum(vector<int> &vec, int sum) {  //Time complexity = O(n)
    unordered_set<int> s;
    int prifix_sum = 0;
    for(int i = 0; i < vec.size(); i++) {
        prifix_sum += vec[i];
        if(s.find(prifix_sum - sum) != s.end()) {
            return true;
        }
        else if(prifix_sum == sum) {
            return true;
        }
        else {
            s.insert(prifix_sum);
        }

    }
    return false;
}

int main() {
    vector<int> vec = {5, 8, 6, 13, 3, -1};
    int sum = 22; 
    cout << subArraySum(vec, sum);
}