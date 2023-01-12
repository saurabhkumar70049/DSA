#include <bits/stdc++.h>
using namespace std;

int max_diff(int arr[], int n) {
    int max_d = -1;
    int min_i = arr[0];
    for (int i = 0; i < n-1; i++) {
        max_d = max(max_d, arr[i] - min_i);
        min_i = min(min_i, arr[i]);
    }
    return max_d;
}

int main() {
    int arr[5] = {2, 10, 5, 1, 7};
    cout << max_diff(arr, 5) << endl;
}