//Anti-clockwise

#include<bits/stdc++.h>
using namespace std;

// void rotateMatrix(vector<vector<int>>& vec) {
//     vector<vector<int>> vec1;

//     for(int i = 0; i < vec.size(); i++) {
//         vector<int> v;
//         for(int j = 0; j < vec[i].size(); j++) {
//             v.push_back(vec[j][vec[i].size()-1-i]);
//         }
//         vec1.push_back(v);
//     }
//     for(int i = 0; i < vec1.size(); i++) {
//         for(int j = 0; j < vec1[i].size(); j++) {
//             vec[i][j] = vec1[i][j];
//         }
//     }
// }

void rotateMatrix(vector<vector<int>> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        for (int j = i+1; j < vec[i].size(); j++) {
            swap(vec[i][j], vec[j][i]);
        }
    }
    // for(int i = 0; i < (vec.size())/2; i++) {
    //     for(int j = 0; j < vec[i].size(); j++) {
    //         swap(vec[i][j], vec[vec.size()-1-i][j]);
    //     }
    // }
    for(int i = 0; i < vec.size(); i++) {
        int low = 0, high = vec.size()-1;
        while(low < high) {
            swap(vec[low][i], vec[high][i]);
            low++;
            high--;
        }
    }
}

int main() {
    vector<vector<int>> vec = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    rotateMatrix(vec);
    for(auto i : vec) {
        for(int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}