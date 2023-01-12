#include <bits/stdc++.h>
using namespace std;

void swap_arr(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void last_array(int arr[], int n) {
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            if (j != i) {
                swap_arr(arr, i, j);
            }
            
            j++;
        }
    }
    cout << "modifide array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {3, 8, 0, 0, 7};
    last_array(arr, 5);
}