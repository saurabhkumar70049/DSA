#include<bits/stdc++.h>
using namespace std;

// void sortArray(int arr[], int n, int i, int mid, int j) {
//     for (int k = mid+1; k < n; k++) {
//         int key = arr[k];
//         int s = k-1;
//         while(s >= 0 && arr[s] > key) {
//             arr[s+1] = arr[s];
//             s--;
//         }
//         arr[s+1] = key;
//     }
// }

void sortArray(int arr[], int n, int low, int mid, int high) {
    int n1 = mid+1-low;
    int n2 = high - mid;
    int arr1[n1], arr2[n2];
    int i = 0;
    while(i <= mid) {
        arr1[i] = arr[i];
        i++;
    }
    int k = 0;
    while(k < n2) {
        arr2[k] = arr[mid+1+k];
        k++;
    }
    

    int i1 = 0, i2 = 0, index = low;
    while(i1 < n1 && i2 < n2) {
        if (arr1[i1] < arr2[i2]){
            arr[index] = arr1[i1];
            i1++;
        }
        else {
            arr[index] = arr2[i2];
            i2++;
        }
        index++;
    }
    while(i1 < n1) {
        arr[index] = arr1[i1];
        i1++;
        index++;
    }
    while(i2 < k) {
        arr[index] = arr2[i2];
        index++;
        i2++;
    }
}

int main() {
    int arr[] = {3, 5, 1, 2, 10};
    int i = 0;
    int mid = 1;
    int j = 4;
    sortArray(arr, 5, i, mid, j);
    for (int i : arr) {
        cout << i << " ";
    }
}