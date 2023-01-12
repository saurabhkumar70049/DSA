#include <bits/stdc++.h>
using namespace std;

// void shift_zero(int arr[], int n) {      //first method
//     int temp;                            //time complexity = O(n)
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             for (int j = i+1; j < n; j++) {
//                 if (arr[j] != 0) {
//                     temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }


void swap_a(int arr[], int i, int rest) {
    if (rest < i) {
        int temp = arr[rest];
        arr[rest] = arr[i];
        arr[i] = temp;
    }
    else {
        return;
    }
}

void shift_zero(int arr[], int n) {
    int rest = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            
            swap_a(arr, i, rest);
            rest++;

        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {7, 9, 0, 0, 8};
    shift_zero(arr, 5);
}