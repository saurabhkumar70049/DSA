/*
two sorted arrays are given, we need to return intersection of these two array
arr1 = {2,3, 5, 5, 7, 7, 7}, arr2 = {1, 3, 5, 5, 5, 9}
output = {3, 5}; //element present in both the array and not repeated in this array
*/
#include<bits/stdc++.h>
using namespace std;

// vector<int> intersectionVector(vector<int> &vec1, vector<int> &vec2) { //time complexity = O(n*m)
//     vector<int> vec3;
//     for(int i = 0; i < vec1.size(); i++) {
//         if((i == vec1.size()-1) || (vec1[i] != vec1[i+1])) {
//             for(int j = 0; j < vec2.size(); j++){
//                 // if ((j == vec2.size()-1) || (vec2[j] != vec2[j+1])){
//                     if(vec1[i] == vec2[j]){
//                         vec3.push_back(vec1[i]);
//                         break;
//                     }
                
//             }
//         }
//     }
//     return vec3;
// }

vector<int> intersectionVector(vector<int> &vec1, vector<int> &vec2) { // time complexity = O(m+n)
    vector<int> vec3;
    int n1 = vec1.size(), n2 = vec2.size();
    if (vec1[0] > vec2[n2] || vec2[0] > vec1[n2]) {
        return vec3;
    }
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if (i > 0 && vec1[i] == vec1[i-1]) {
            i++;
            continue;
        }
        else {
            if(vec1[i] < vec2[j]) {
                i++;
            }
            else if(vec1[i] > vec2[j]) {
                j++;
            }
            else {
                vec3.push_back(vec1[i]);
                i++;
                j++;
            }
        }
    }
    return vec3;


}

int main() {
    vector<int> vec1 = {1,2,3,8,9,9};
    vector<int> vec2 = {2,7,7,9,9};

    vector<int> vec3 = intersectionVector(vec1, vec2);
    for (auto v : vec3) {
        cout << v << " ";
    }
}