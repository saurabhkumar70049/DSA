#include<bits/stdc++.h>
using namespace std;

//1. sort an array of 0s, 1s, and 2s 
// void hoareSort(int arr[], int low, int high) {
//     int i = low, mid = low, j = high;
//     while(mid <= j) {
//         // cout << j << " ";
//         if(arr[mid] == 0) {
//             swap(arr[mid], arr[i]);
//             mid++;
//             i++;
//         }
//         else if(arr[mid] == 1) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[j]);
//             j--;
//         }

        
//     }
// }

//2. three way partision {here we have pivot and occurence of pivot may be multiple times. we need sort pivot }

// void hoareSort(int arr[], int low, int high, int pivot){
//     int mid = low;
//     while(mid <= high) {
//         if(arr[mid] < pivot){
//             swap(arr[low], arr[mid]);
//             mid++;
//             low++;
            
//         }
//         else if(arr[mid] == pivot) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

//3.partision around a range 

void hoareSort(int arr[], int low, int high, int range[]) {
    int mid = low;
    while(mid <= high) {
        if(arr[mid] < range[0]) {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] >= range[0] && arr[mid] <= range[1]) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {9, 13, 20, 5, 0, 3, 2, 18};
    // hoareSort(arr, 0, 8-1);//sort an array of 0s, 1s, and 2s  {0, 1, 2, 1, 0, 0, 1, 2}
    // int pivot = 3;
    // hoareSort(arr, 0, 8-1, pivot);//2. three way partision {9, 3, 10, 1, 0, 3, 2, 3}
    int range[2] = {7, 13};
    hoareSort(arr, 0, 8-1, range);
    for(int i : arr) {
        cout << i << " ";
    }
}