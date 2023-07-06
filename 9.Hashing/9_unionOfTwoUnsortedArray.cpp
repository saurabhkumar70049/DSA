//Given two list of element and we need to tell the union of both the list
// Note : distinct element appear in any element
// ex : arr1 = {9, 9, 9, 4, 2, 4}, arr2 = {2, 5, 7, 9, 9}
// opt = {9, 4, 2, 5, 7}

#include<bits/stdc++.h>
using namespace std;

void unionOfArray(vector<int> &vec, vector<int> &vec1) {
    unordered_set<int> s(vec.begin(), vec.end());
    for(int i = 0; i < vec1.size(); i++) {
        s.insert(vec1[i]);
    }
    // cout << s.size();
    for(int i : s){
        cout << i << " ";
    }
}

int main() {
    vector<int> vec = {15, 12, 8, 9, 8};
    vector<int> vec1 = {9, 9, 5, 18};
    unionOfArray(vec, vec1);
}