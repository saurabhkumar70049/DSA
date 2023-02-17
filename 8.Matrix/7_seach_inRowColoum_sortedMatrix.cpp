#include<bits/stdc++.h>
using namespace std;

// void searchElement(vector<vector<int>> &vec, int key) { //time complexity = O(n*m)
//     for(int i = 0; i < vec.size(); i++) {
//         for(int j = 0; j < vec[i].size(); j++) {
//             if(key == vec[i][j]) {
//                 cout << "(" << i << ", " << j << ")";
//                 return;
//             }
//         }
//     }
// }

void searchElement(vector<vector<int>> &vec, int key) { // time complexity = O(n+m)
    int n = vec.size(), i = 0, j = vec[0].size()-1;
    while(i < n && j >= 0){
        if(vec[i][j] == key) {
            cout << i << ", " << j;
            return;
        }
        else if(vec[i][j] > key) {
            j--;
        }
        else {
            i++;
        }
    }
    cout << "NOT FOUND";
}

int main(){
    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int key = 21;
    searchElement(vec, key);
}