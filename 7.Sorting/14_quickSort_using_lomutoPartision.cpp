#include<bits/stdc++.h>
using namespace std;

int lomudoPartision(int arr[], int low, int high) {
    int i = low-1, pivot = arr[high];
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    // cout << arr[i+1] <<endl;
    swap(arr[i+1], arr[high]);
    // for (int k = 0; k <= high; k++) {
    //     cout << arr[k] << " " ;
    // }
    // cout << endl;
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = lomudoPartision(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

int main() {
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    quickSort(arr, 0, 6);
    for(int i : arr) {
        cout << i << " ";
    }
}