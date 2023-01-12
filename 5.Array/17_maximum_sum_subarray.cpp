#include<bits/stdc++.h>
using namespace std;

// int sum_max(int arr[], int n){   //time complexity = O(n^2)
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         int temp = 0;
//         for (int j = i; j < n; j++) {
//             temp = temp + arr[j];
//             sum = max(sum, temp);
//         }
//     }
//     return sum;
// }

int sum_max(int arr[], int n) {   //time complexity = O(n)
    int sum = arr[0];
    int max_sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum = max(arr[i], arr[i]+sum);
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}


int main() {
    int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    cout << sum_max(arr, 7);
}