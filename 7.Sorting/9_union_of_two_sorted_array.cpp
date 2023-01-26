/*
two arrays are given and we need to return the third vector which is union of these two vector 
example -- arr1 = {3, 4, 5, 5, 5}
           arr2 = {2, 4, 5, 5, 10, 15, 15}
    output-- arr3 = {2, 3, 4, 5, 10, 15}
*/


#include<bits/stdc++.h>
using namespace std;

// vector<int> unionOfArrays(vector<int> &vec1, vector<int> &vec2) {// time complexity = O(m+nlog(m+n))
//     vector<int> vec3;
//     int n1 = vec1.size();
//     int n2 = vec2.size();
//     vec3.reserve(n1+n2);
//     for(int i = 0; i < n1; i++) {
//         vec3.push_back(vec1[i]);
//     }
//     for(int i = 0; i < n2; i++) {
//         vec3.push_back(vec2[i]);
//     }
//     sort(vec3.begin(), vec3.end());
    
//     int k = 0;
//     for(int i = 0; i < vec3.size(); i++) {
//         if(i > 0 && vec3[i] == vec3[i-1]) {
//             continue;
//         }
//         else {
//             vec3[k] = vec3[i];
//             k++;
//         }

//     }
//     vec3.resize(k);
//     return vec3;
// }

vector<int> unionOfArrays(vector<int> &vec1, vector<int> &vec2) {//time complexity = O(m+n)
    vector<int> vec3;
    int n1 = vec1.size();
    int n2 = vec2.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if(i > 0 && vec1[i] == vec1[i-1]){
            i++;
            continue;
        }
        if(j > 0 && vec2[j] == vec2[j-1]){
            j++;
            continue;
        }


        if(vec1[i] == vec2[j]) {
            vec3.push_back(vec1[i]);
            i++;
            j++;
        }
        else if(vec1[i] < vec2[j]){
            vec3.push_back(vec1[i]);
            i++;
        }
        else {
            vec3.push_back(vec2[j]);
            j++;
        }

    }

    while(i < n1) {
        if(i > 0 && vec1[i] == vec1[i-1]){
            i++;
            continue;
        }
        vec3.push_back(vec1[i]);
        i++;
    }
    while(j < n2) {
        if(j > 0 && vec2[j] == vec2[j-1]) {
            j++;
            continue;
        }
        vec3.push_back(vec2[j]);
        j++;
    }
    return vec3;
}

int main() {
    vector<int> vec1 = {3,5,5,8};
    vector<int> vec2 = {2,3,5,5,5,15,15};

    vector<int> vec3 = unionOfArrays(vec1, vec2);
    for(auto v : vec3) {
        cout << v << " ";
    }

}