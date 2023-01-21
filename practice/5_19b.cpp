#include<bits/stdc++.h>
using namespace std;

int normalSum(int arr[], int n) {
    int sum = arr[0], maxSum = arr[0];
    for (int i = 1; i< n; i++) {
        sum += arr[i];
        sum = max(sum, arr[i]);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int circulerSum(int arr[], int n) {
    int m = normalSum(arr, n);
    // cout << m << " ";
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        arr[i] = -arr[i];
    }
    return max(m, (sum + normalSum(arr, n)));

}

int main() {
    int arr[] = {5,-3,-4,10};
    cout << circulerSum(arr, 4);
}