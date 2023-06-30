/*
*important*
what is inversion
ans -- a pair of arr[i] and arr[j] where i < j and arr[i] > arr[j]
example -- arr = {2, 4, 1, 3}
        O/P = 3 {(2,1), (4,1), (4,3)}
*/

#include<bits/stdc++.h>
using namespace std;

// int inversion(vector<int> &vec) {
//     int count = 0;
//     for(int i = 0; i < vec.size(); i++) {
//         for (int j = i+1; j < vec.size(); j++) {
//             if(vec[i] > vec[j]) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int mergeFunction(vector<int> &vec, int l, int mid, int h) {
    int count = 0;
    int n1 = mid - l + 1;
    int n2 = h - mid;
    vector<int> vec1(n1);
    vector<int> vec2(n2);
    
    for(int i = l; i < n1+l; i++) {
        vec1[i-l] = vec[i];
    }
    for(int i = 0; i < n2; i++) {
        vec2[i] = vec[i + mid + 1];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if (vec1[i] > vec2[j]) {
            vec[k] = vec2[j];
            j++;
            count += (n1-i);   // here we count how many element is greater than that element
        }
        else {
            vec[k] = vec1[i];
            i++;
        }
        k++;
    }
    while(i < n1) {
        vec[k] = vec1[i];
        i++;
        k++;
    }
    while(j < n2) {
        vec[k] = vec2[j];
        j++;
        k++;
    }
    // cout << count << " ";
    return count;
} 

int inversion(vector<int> &vec, int l, int h) { // time complexity = O(nlogn)
    int count = 0;
    if(l < h) {
        int mid = l + (h-l)/2;
        count += inversion(vec, l, mid);
        count += inversion(vec, mid+1, h);
        count += mergeFunction(vec, l, mid, h);

    }
    return count;
}

int main() {
    vector<int> vec =  {2, 4, 1, 3};
    cout << inversion(vec, 0, vec.size()- 1);
    cout << endl;
    for (auto v : vec) {
        cout << v <<" ";
    }
}