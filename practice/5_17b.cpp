#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n) {
    int maxSum = arr[0], sum = arr[0];
    for(int i = 1; i < n; i++) {
        sum = max(arr[i], arr[i]+sum);
        maxSum = max(sum, maxSum);    
    }
    return maxSum;
}

int main () {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarray(arr, 7);
}