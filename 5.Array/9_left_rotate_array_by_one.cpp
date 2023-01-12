#include <bits/stdc++.h>
using namespace std;

void rotate_arr(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main() {
    int arr[] = {12, 19, 7, 5};
    rotate_arr(arr, 4);
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
}