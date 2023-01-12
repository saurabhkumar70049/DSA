#include<bits/stdc++.h>
using namespace std;

// int water(int arr[], int n) {   // time complexity = O(n^2)
//     int rest = 0;
//     for (int i = 1; i < n-1; i++) {
//         int lmax = arr[i];
//         for (int j = 0; j < i; j++) {
//             lmax = max(lmax, arr[j]);

//         }
//         int rmax = arr[i];
//         for (int j = i+1; j < n; j++) {
//             rmax = max(rmax, arr[j]);
//         }
//         rest += min(rmax, lmax) - arr[i];
//     }
//     return rest;
// }

int water(int arr[], int n) { // time complexity = O(n) and space complexity = O(n)
    int rest = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        lmax[i] = max(arr[i], lmax[i-1]);
    }
    rmax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        rmax[i] = max(arr[i], rmax[i+1]);
    } 
    for (int i = 1; i< n-1; i++) {
        rest += min(lmax[i], rmax[i]) - arr[i];
    }
    return rest;
}

int main() {
    int arr[] = {3, 0, 1, 2, 5};
    cout << water(arr, 5);
}