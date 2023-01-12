//maximum value of arr[j] - arr[i] such that j > i

#include <bits/stdc++.h>
using namespace std;

// int diff(int arr[], int n) {
//     int sub = -1;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             if (sub < (arr[j]-arr[i])) {
//                 sub = arr[j] - arr[i];
//             }
//         }
//     }
//     return sub;
// }

int diff(int arr[], int n) {   // time complexity = O(n)
    int res = arr[1] - arr[0];
    int minv = arr[0];
    for (int j = 1; j < n; j++) {
        res = max(res, arr[j]- minv);
        minv = min(minv, arr[j]);
    }
    return res;
}

int main() {
    int arr[] = {6, 2, 3, 5, 7, 9, 10};
    cout << diff(arr, 7);
    
}