/*important*/
#include<bits/stdc++.h>
using namespace std;

void printSpiral(vector<vector<int>> &vec) {
    int n = vec.size();
   
    int top = 0, right = n-1, bottom = n-1, left = 0;
    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) {
            cout << vec[top][i] << " ";
        }
        top++;
        for(int  i = top; i <= bottom; i++) {
            cout << vec[i][right] << " ";
        }
        right--;
        for(int i = right; i >= left; i--) {
            cout << vec[bottom][i]<< " ";
        }
        bottom--;
        for(int i = bottom; i >= top; i--) {
            cout << vec[i][left] << " ";
        }
        left++;
    }
    
    
}

int main () {
    vector<vector<int>> vec = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    printSpiral(vec);
}