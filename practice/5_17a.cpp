#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n) {
    int maxSub = arr[0], sum = arr[0];
    for (int i = 1; i < n; i++) {
        maxSub = max(arr[i], maxSub+arr[i]);
        sum = max(sum, maxSub);
    }
    return sum;
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarray(arr, 7) << " ";
}