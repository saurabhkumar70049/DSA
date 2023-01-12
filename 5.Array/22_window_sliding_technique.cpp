#include <bits/stdc++.h>
using namespace std;

//  int max_sum_for_k(int arr[], int n, int k){
//     int sum = 0, max_sum = 0;
//     for(int i = 0; i <= n-k; i++) {
//         sum = arr[i];
//         for (int j = i+1; j < k+i; j++){
//             sum += arr[j];
//         }
//         max_sum = max(sum, max_sum);
//     }
//     return max_sum;
// }

int max_sum_for_k(int arr[], int n, int k) {
    int sum = arr[0];
    
    for (int i = 1; i < k; i++) {
        sum += arr[i];
    }
    int sum_max = sum;
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i-k];
        sum_max = max(sum, sum_max);
    }
    return sum_max;
}

int main() {
    int arr[5] = {10, -5, 90, 6, 3};
    cout << "enter K : ";
    int k;
    cin >> k;
    cout << max_sum_for_k(arr, 5, k);
}