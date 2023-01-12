#include <bits/stdc++.h>
using namespace std;


void intialization(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++) {
            arr[i] ^= arr[i-1];
        }
        
    }
// vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//        vector<int> arr1(queries.size());
//         intialization(arr);
//         for (int i = 0; i < queries.size(); i++) {
//             if(queries[i][0] == 0) {
//                 arr1[i] = arr[queries[i][1]];
//             }
//             else {
//                 arr1[i] = arr[queries[i][1]]^arr[queries[i][0]-1];
//             }
//         }
//         return arr1;
// }

int main() {
    vector<int> arr;
    vector<vector<int>> queries;
    cout << "enter arr : ";
    int a;
    for (int i = 0; i< 4; i++) {
        cin >> a;
        arr.push_back(a);
    }
    intialization(arr);
    for (auto it: arr) {
            cout << it << " ";
        }
    // for (int i = 0; i < 4; i++) {
    //     cin >> a;
    // }
}