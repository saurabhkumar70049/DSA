#include <bits/stdc++.h>
using namespace std;

// void boundaryTraversal(vector<vector<int>> &vec) {
//     for(int i = 0; i < vec.size(); i++) {
//         for (int j = 0; j < vec[i].size(); j++) {
//             if((i == 0 || i == vec.size()-1) || (j == 0 || j == vec[i].size()-1)){
//                 cout << vec[i][j] << " ";
//             }
//         }
//     }
// }

void boundaryTraversal(vector<vector<int>>& vec) {
    int n = vec.size();
    int m = vec[0].size();
    if(n == 1) {
        for(int i = 0; i < m; i++) {
            cout << vec[0][i] << " ";
        }
    }
    else if(m == 1) {
        for(int i = 0; i < n; i++) {
            cout << vec[i][0]<< " ";
        }
    }
    else {
        for(int i = 0; i < m; i++) {
            cout << vec[0][i] << " ";
        }
        for(int i = 1; i < n; i++) {
            cout << vec[i][m-1] << " ";
        }
        for(int i = m-2; i >= 0; i--) {
            cout << vec[n-1][i] << " ";
        }
        for(int i = n-2; i > 0; i--) {
            cout << vec[i][0] << " ";
        }
    }
}

int main() {
    vector<vector<int>> vec = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << "boundary element : " << endl;
    boundaryTraversal(vec);
}