

#include<bits/stdc++.h>
using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         if(arr[i-1] > arr[i]) {
//             int temp = arr[i];
//             for (int j = i-1; j >= 0; j--){
//                 arr[j+1] = arr[j];
//                 if ((arr[j-1] <= temp) || (j == 0)){
//                     arr[j] = temp;
//                     break;
//                 }
//             }
//         }
//     }
// }

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {6, 3, 1, 0 , 1};
    insertionSort(arr, 5);
    for(int i : arr) {
        cout << i << " ";
    }
}