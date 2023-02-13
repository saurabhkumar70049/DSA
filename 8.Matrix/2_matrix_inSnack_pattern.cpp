#include <bits/stdc++.h>
using namespace std;

void snackPattern(vector<vector<int>> &vec){
    // int t = 0;
    for(int i = 0; i < vec.size(); i++) {
        if(i%2 == 0) {
            for(int j = 0; j < vec[i].size(); j++) {
                cout << vec[i][j] << " ";
            }
            cout <<endl;
           
        }
        else {
            for(int j = vec[i].size()-1; j >= 0; j--) {
                cout << vec[i][j] << " ";
            }
            cout << endl;
           
        }
        
    }
}

int main() {
    vector<vector<int>> vec = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << "Original vector : " << endl;
    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    // snackPattern(vec);
    cout << "Snack pattern : " << endl;

    snackPattern(vec);
    // for(int i = 0; i < vec.size(); i++) {
    //     for(int j = 0; j < vec[i].size(); j++) {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}