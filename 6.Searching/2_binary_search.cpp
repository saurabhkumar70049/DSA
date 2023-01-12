#include<bits/stdc++.h>
using namespace std;

// int binary_search(int arr[], int first, int last, int key) {
    
//     while (first <= last) {
//         if (arr[(first+last)/2] == key) {
//             return (first+last)/2;
//         }
//         if (arr[(first+last)/2] > key) {
//             last = (first+last)/2 - 1;
//             // cout << last<< " ";
//         }
//         else {
//             first = (first+last)/2 + 1;
//             // cout << first<< " ";
//         }
//     }
//     return -1;
// }

int binary_search(int arr[], int first, int last, int key) {
    if (first > last) {
        return -1;
    }
    int mid = (first+last)/2;
    if (arr[mid] == key) {
        return mid;
    }
    else if (key > arr[mid]) {
        return binary_search(arr, mid+1, last, key);
    }
    else {
        return binary_search(arr, first, mid-1, key);
    }
}

int main() {
    int arr[] = {2, 5, 9, 13, 18}; //sorted array
    cout << "Enter key : ";
    int key;
    cin >> key;
    cout << "index of key : " << binary_search(arr, 0, 5 - 1, key);
}