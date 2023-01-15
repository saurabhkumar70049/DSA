#include <bits/stdc++.h>
using namespace std;

int maxDifference(int arr[], int n) {
    int maxDiff = 0, smallElement = arr[0];
    for (int i = 1; i < n; i++) {
        smallElement = min(smallElement, arr[i-1]);
        maxDiff = max(maxDiff, (arr[i]-smallElement));
    }
    return maxDiff;
}

int main() {
    int arr[] = {10, 7, 1, 5, 9,22};
    cout << maxDifference(arr, 6);
}