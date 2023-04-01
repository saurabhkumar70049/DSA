//Given a List of element and we need to write a program to find out how many distinct element is present
// arr = {12, 13, 12, 9, 13} 
// opt = 3

#include <bits/stdc++.h>
using namespace std;


// int distinctElement(vector<int> &vec) { //time complexity = O(n^2)
//     int count = 1;
//     for(int i = 1; i < vec.size(); i++) {
//         bool check = true;
//         for(int j = i-1; j >= 0; j--) {
//             if(vec[i] == vec[j]){
//                 check = false;
//                 break;
//             }
//         }
//         if(check == true){
//             count++;
//         }
//     }
//     return count;
// }

// int distinctElement(vector<int> &vec) { //time complexity = O(n) && space complexity = O(n)
//     unordered_set<int> s;
//     for(int i = 0; i < vec.size(); i++) {
//         s.insert(vec[i]);
//     }
//     return s.size();
// }

int distinctElement(vector<int> &vec) {   //time complexity = O(n) && space complexity = O(n)
    unordered_set<int> s(vec.begin(), vec.end());
    return s.size();
}

int main() {
    vector<int> vec = {12, 15, 2, 12, 2, 1};
    cout <<distinctElement(vec);
}