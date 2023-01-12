#include <bits/stdc++.h>
using namespace std;

void rev_arr(int arr[], int n) {
    int temp;
    for (int i = 0; i < n/2; i ++) {
        temp = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = temp;
    }

    cout << "Modified array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {50, 5, 4, 20, 76};
    rev_arr(arr, 5);

}