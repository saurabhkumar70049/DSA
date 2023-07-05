//important


#include<bits/stdc++.h>
using namespace std;

// int medianOfMatrix(vector<vector<int>> &vec) {
//     vector<int> vec1;
//     for(int i = 0; i < vec.size(); i++) { // time complexity = O(n*m)
//         for(int j = 0; j < vec[i].size(); j++) {
//             vec1.push_back(vec[i][j]);
//         }
      
//     }

//     sort(vec1.begin(), vec1.end()); //time complexity = O(n*m log n*m)
//     return vec1[vec1.size()/2];
// }

// int lomudoPartision(vector<int> &vec, int l, int r) {
//     int pivot = vec[r];
//     int i = l-1, j = l;
//     while(j < r) {
//         if(vec[j] < pivot) {
//             swap(vec[j], vec[i+1]);
//             i++;
//         }
//         j++;
//     }
//     swap(vec[r], vec[i+1]);
//     return i+1;
// }

// int callPartision(vector<int> &vec1) {
//     int n = vec1.size();
//     int l = 0, r = n-1;
//     while(l <= r){
//         int p = lomudoPartision(vec1, l, r);

//         if(p == n/2) {
//             return vec1[p];
//         }
//         else if(p < n/2) {
//             l = p+1;
//         }
//         else {
//             r = p-1;
//         }
//     }
    
// }

// int medianOfMatrix(vector<vector<int>> &vec) { //time complexity = O(n*m);
//     vector<int> vec1;
//     for(int i = 0; i < vec.size(); i++) {
//         for(int j = 0; j < vec[i].size(); j++) {
//             vec1.push_back(vec[i][j]);
//         }
      
//     }
//     int median = callPartision(vec1);
//     return median;

// }

int medianOfMatrix(vector<vector<int>> &vec) { // Time complexity = O(r*log(max-min)*logc)
    int n = vec.size(), c = vec[0].size();
    int min1 = vec[0][0], max1 = vec[0][n-1];
    for(int i = 1; i < n; i++){
        min1 = min(min1, vec[i][0]);
        max1= max(max1, vec[i][n-1]);
    }
   
    int medpos = (n*c + 1)/2;
    
    while(min1 < max1) { 
        int mid = (min1+max1)/2;
        int midres = 0;
        for(int i = 0; i < n; i++) {
            midres += upper_bound(vec[i].begin(), vec[i].end(), mid) - vec[i].begin(); 
        }
        if(midres > medpos){
            max1 = mid -1;
        }
        else {
            min1 = mid;
        }
    }
    return max1;
}

int main() {
    vector<vector<int>> vec = {{1, 5, 10},{13, 15, 17},{4, 8, 9}};
    cout << medianOfMatrix(vec) ;
}