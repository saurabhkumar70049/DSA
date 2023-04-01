//given two list of element and we need to find out intersection of its
//Note : select element present in both the list
// ex : arr1 = {9,9, 3, 11, 4}, arr2 = {3,  1, 12, 12, 9}
// out = {3, 9}

#include<bits/stdc++.h>
using namespace std;

// void intersectionOfArray(vector<int> &vec, vector<int> &vec1) {
//     sort(vec.begin(), vec.end());
//     sort(vec1.begin(), vec1.end());
//     int i = 0, j = 0;
//     while(i < vec.size() & j < vec1.size()) {
//         if( i > 0 & vec[i] == vec[i-1]) {
//             i++;
//             continue;
//         }
//         if(vec[i] == vec1[j]) {
//             cout << vec[i] << " ";
//             i++;
//             j++;
//         }
//         else if (vec[i] < vec1[j]) {
//             i++;
//         }
//         else {
//             j++;
//         }
//     }
// }

// Assumption - Element in both the arrays are distinct

void intersectionOfArray(vector<int> &vec, vector<int> &vec1){ //time complexity = O(max(vec.size(), vec1.size()))
    unordered_set<int> s;
    for(int i = 0; i < vec1.size(); i++) {
        s.insert(vec1[i]);
    }
    for(int i = 0; i < vec.size(); i++) {
        if(s.find(vec[i]) != s.end()){
            cout << vec[i] << " ";
        }
    }

}

int main() {
    vector<int> vec = {3, 18, 4, 7, 9};
    vector<int> vec1 = {9, 7, 15, 3};
    intersectionOfArray(vec, vec1);
}