#include<bits/stdc++.h>
using namespace std;

void transposeMatrix(vector<vector<int>>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        // int t = i;
        for(int j = i+1; j < vec[i].size(); j++) {
            swap(vec[j][i], vec[i][j]);
            // t++;
        }
       
    }
}

int main() {
    vector<vector<int>> vec = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    transposeMatrix(vec);
    for(auto i : vec) {
        for(int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}