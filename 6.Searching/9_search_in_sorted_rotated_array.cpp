#include <bits/stdc++.h>
using namespace std;

// int binary_sear(int arr[], int first, int last, int key) {
//     if(first > last) {
//         return -1;
//     }
//     int mid = (first + last)/2;
//     if(arr[mid] == key) {
//         return mid;
//     }
//     else if(arr[mid] > key) {
//         return binary_sear(arr, first, mid -1, key);
//     }
//     else {
//         return binary_sear(arr, mid+1, last, key);
//     }
// }

// int search_key(int arr[], int n, int key) {
//     int last_index = -1;
//     for (int i = 0; i < n-1; i++) {
//         if (arr[i] > arr[i+1]) {
//             last_index = i;
//         }
//     }
//     if(last_index != -1) {
//         if(arr[0] <= key) {
//             return binary_sear(arr, 0, last_index, key);
//         }
//         else {
//             return binary_sear(arr, last_index + 1, n-1, key);
//         }
        
//     }
//     else {
//         return binary_sear(arr, 0, n-1,key);
//     }
// }

// int search_key(int arr[], int n, int key){
//     int mid = (n-1)/2;
//     if (arr[mid] == key) {
//         return mid;
//     }
//     else if(arr[mid] > arr[0]){
//         if((arr[mid] >= key) && (arr[0] <= key)) {
//             return binary_sear(arr, 0, mid, key);
//         }
//         else {
//             for (int i = mid+1; i < n; i++) {
//                 if (arr[i] == key) {
//                     return i;
//                 }
//             }
//             return -1;
//         }
//     }
//     else {
//         if((arr[mid + 1] <= key) && (arr[n-1] >= key)) {
//             return binary_sear(arr, mid+1, n-1, key);
//         }
//         else {
//             for (int i = 0; i <= mid; i++) {
//                 if (arr[i] == key) {
//                     return i;
//                 }
               
//             }
//             return -1;
//         }
//     }
// }

int search_key(int arr[], int n, int key){
    int first = 0, last = n-1;
    while (first <= last) {
        int mid = (first + last)/2;
        if (arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] >= arr[first]) {
            if (arr[first] <= key && arr[mid] > key) {
                last = mid-1;
            }
            else {
                first = mid+1;
            }
        }
        else {
            if(arr[mid] < key && arr[last] >= key) {
                first = mid+1;
            }
            else {
                last = mid -1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 1};
    int key = 1;
    cout << search_key(arr, 2, key);
}