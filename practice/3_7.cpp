#include <bits/stdc++.h>
using namespace std;

void cal(int arr[], int n) {
    int rest = arr[0];
    for (int i = 1; i < n; i++) {
        rest = arr[i]^rest;
    }

    int right = rest & (-rest); // for right most bit
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if ((right & arr[i])) {
            x = x^arr[i];
        }
        else {
            y = y^arr[i];
        }
    }
    cout << x << " " << y;
}

int main() {
    int arr[] = {2, 4, 7, 2, 9, 7, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cal(arr, n);
}