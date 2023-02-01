/*
Given an array ARR and a integer K. we need tell the kth smallest number
exmaple --> arr = {2, 9, 1, 10, 8, 3}, k = 4
            output --> 8
*/


#include<bits/stdc++.h>
using namespace std;

// int partision(int arr[], int l, int r) {
//     int i = l-1, j = r+1;
//     int pivot = arr[l];
//     while(true) {
//         do {
//             i++;
//         }while(arr[i] < pivot);
//         do {
//             j--;
//         }while(arr[j] > pivot);
//         if(i >= j) {
//             return j;
//         }
//         swap(arr[i], arr[j]);
//     }
// }

// void sortArr(int arr[], int l, int r) {
//     if(l < r) {
//         int p = partision(arr, l, r);
//         // cout << p << " ";
//         sortArr(arr, l, p);
//         sortArr(arr, p+1, r);
//     }
// }

// int kthSmallestNumber(int arr[], int n, int k) { // this solution is based upon naive solution and time compllexity = O(nlogn)

//     sortArr(arr, 0, n-1);
   
    
//     return arr[k-1];
// }

int partision(int arr[], int l, int r) {
    int i = l-1;
    for(int k = l; k < r; k++) {
        if (arr[k] < arr[r]){
            i++;
            swap(arr[i], arr[k]);
           
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

// int kthSmallestNumber(int arr[], int l,int r, int k) {
//     if(l <= r) {
//         int p = partision(arr, l, r);
//         cout << p << " ";
//         if(p == k-1) {
            
//             return arr[p];
//         }
//         else if(p > k-1) {
//             return kthSmallestNumber(arr, l, p-1, k);
//         }
//         else {
//             return kthSmallestNumber(arr, p+1, r, k);
//         }
//     }
//     return -1;
// }

int kthSmallestNumber(int arr[], int low, int high, int k) {
    while(low <= high) {
        int p = partision(arr, low, high);
        if (p == k-1) {
            return arr[p];
        }
        else if(p < k-1) {
            low = p + 1;
        }
        else {
            high = p - 1;
        }
    }
}

int main(){
    int arr[] = {2, 1, 3, 5};
    int k = 1;
    cout << "kth smallest number : " << kthSmallestNumber(arr, 0, 4-1, k);
    cout << endl;
    // for (int i : arr) {
    //     cout << i << " ";
    // }
}
