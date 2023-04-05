// arr = {3, 8, 1, -1, 7}, sum = 6 => output : true
                    //      sum = 14 => output : false


#include<bits/stdc++.h>
using namespace std;

// bool pairSum(vector<int> &vec1, int key) { //time complexity = O(nlogn)
//     sort(vec1.begin(), vec1.end());         // this solution is best in the case of sorted array 
//     int i = 0, j = vec1.size()-1;
//     while(i < j) {
//         int sum = vec1[i]+vec1[j];
//         if(sum == key) {
//             return true;
//         }
//         else if(sum > key) {
//             j--;
//         }
//         else {
//             i++;
//         }
//     }
//     return false;
// }

bool pairSum(vector<int> &vec1, int sum) { // time complexity = O(n)
    unordered_set<int> s;
    for (int i = 0; i < vec1.size(); i++) {
        if(s.find(sum - vec1[i]) != s.end()) {  // Before insertion, we find out the pair of element is available or not, if not then insertion happend
            return true;
        }
        else {
            s.insert(vec1[i]);
        }
    }
    return false;
}

int main() {
    vector<int> vec1 = {2, 9, -1, 5, 18};
    int sum = 20;
    cout << pairSum(vec1, sum);
}