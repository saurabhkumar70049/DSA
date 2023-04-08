//Given an array and we need to tell that maximum  number of consecutive element (x, x+1, x+2 ......)
// arr = {10, 7, 14, 3, 9, 10, 11}
// output  = 3 (9, 10, 11)

#include<bits/stdc++.h>
using namespace std;

// int longestConsecutive(vector<int> &vec) { //time complexity = O(nlogn)
//     sort(vec.begin(), vec.end());
//     int count = 1, res = 1;
//     for(int i = 1; i < vec.size(); i++) {
//         if(vec[i] == vec[i-1]+1) {
//             count++;
//         }
//         else {
//             count = 1;
//         }
//         res = max(res, count);
//     }
//     return res;
// }


//Time complexity = O(n) 
//Note : it looks like time comlexity O(n^2) but there is always 2n lookup at most

int longestConsecutive(vector<int> &vec) { 
    unordered_set<int> s(vec.begin(), vec.end());
    int res = 1;
    for(auto i = s.begin(); i != s.end(); i++) {
        int count = 1;
        if(s.find(*i - 1) != s.end()) {
            continue;
        }
        while(s.find(*i + count) != s.end()) {
            count++;
        }
        res = max(res, count);
    }
    return res;

}

int main() {
    vector<int> vec = {10, 7, 14, 3, 9, 10, 11};
    cout << longestConsecutive(vec);
}