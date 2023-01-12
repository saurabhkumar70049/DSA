#include <bits/stdc++.h>
using namespace std;

int larger_n(int arr[], int n) {
    int max = arr[0], j = 0;
    // for (int i = 1; i < n; i++) {
    //     if (max < arr[i]) {
    //         max = arr[i];
    //         j = i;
    //     }
    // }

    for (int i = 1; i < n; i++) {
    
        if (arr[j] < arr[i]) {
            j = i;
        }
    }

    return j;
}

int main() {
    int arr[5] = {1, 2 , 8, 5, 3};
    cout << larger_n(arr, 5);
}