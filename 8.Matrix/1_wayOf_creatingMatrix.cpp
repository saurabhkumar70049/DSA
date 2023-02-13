#include<bits/stdc++.h>
using namespace std;

// //1st method
// void createMatrix() {
//     int arr[][2] = {{3,4}, {9, 0}, {10, 11}};
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//2nd Method (double pointer)
// void createMatrix() {
//     int **arr;
//     arr = new int*[3];
//     for(int i = 0; i < 3; i++) {
//         arr[i] = new int[2];
//     }
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++) {
//             arr[i][j] = 10;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//3rd method (Array of pointer)
// void createMatrix() {
//     int *arr[4];
//     for(int i = 0; i < 4; i++) {
//         arr[i] = new int[2];
//     }
//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 2; j++) {
//             arr[i][j] = 10;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//4th method (Vector)
// void createMatrix() {
//     vector<int> vec[5]; //In this method, number of row can not be dynamic
//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 2; j++) {
//             vec[i].push_back(10);
//             cout << vec[i][j] << " ";    
//         }
//         cout << endl;
            // }
            // int n = vec.size();
            // for(int i = 0; i < 5; i++) {
            //     for (int j = 0; j < vec[i].size(); j++) {
            //         cout << vec[i][j] << " ";
            //     }
            //     cout << endl;
            // }
// } 

//5th method (vector)
void createMatrix() {
    vector<vector<int>> vec; //In this method, number of row can be dynamic
    for(int i = 0; i < 5; i++) {
        vector<int> v;    //
        for(int j = 0; j < 2; j++) {
            v.push_back(10);
            // cout << vec[i][j] << " ";    
        }
        vec.push_back(v);
    }

    int n = vec.size(); // this method can not be use in previous method
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    createMatrix();
}