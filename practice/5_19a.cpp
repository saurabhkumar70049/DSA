#include <bits/stdc++.h>
using namespace std;

int circularMaxSum(int arr[], int n) {
    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        int sum = arr[i];
        int max_curr = arr[i];
        for (int j = i+1; j < n+i; j++){
            sum += arr[j%n];
            max_curr = max(max_curr, sum);
        }
        max_sum = max(max_curr, max_sum);
        
    }
    return max_sum;
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    cout << circularMaxSum(arr, 7);
}