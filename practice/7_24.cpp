#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n, int k) {
    int arr1[k] = {0}, index = 0;
    for(int i = 0; i < n; i++) {
        arr1[arr[i]]++;
    }
   
    for(int i = 1; i < k; i++) {
        arr1[i] += arr1[i-1];
    }
    for(int i : arr1) {
        cout << i << " ";
    }
    int output[n];
    for(int i = 0; i < n; i++) {
        output[arr1[arr[i]]-1] = arr[i];
        arr1[arr[i]]--;
    }
    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 1, 8, 6, 2};
    int k = 9;
    countingSort(arr, 5, k);
    for(int i : arr) {
        cout << i << " ";
    }
}