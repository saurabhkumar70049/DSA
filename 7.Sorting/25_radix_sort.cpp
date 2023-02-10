#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n, int d) {
    // cout << d <<endl;
    int arr1[10] = {0};
    for(int i = 0; i < n; i++) {
        int s = (arr[i]%d)/(d/10);
     
        arr1[s]++;
    }
    // for(int i : arr1) {
    //     cout << i << " ";
    // }
    for(int i = 1; i < 10; i++) {
        arr1[i] += arr1[i-1];
    }
    int output[n];
    for(int i = n-1; i >=0; i--) {
        output[arr1[(arr[i]%d)/(d/10)] - 1] = arr[i];
        arr1[(arr[i]%d)/(d/10)]--;
    }
    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {
    int maxElement = *max_element(arr, arr+n);
    // cout << maxElement << " ";
    for (int i = 1; i <= log10(maxElement)+1; i++) {  //time complexity (log10(maxElemnt) * n)
        countingSort(arr, n, ceil(pow(10, i)));
    }
}

int main() {
    int arr[] = {389, 7, 1000, 59800, 26};
    // cout << (arr[0]%100)/(100/10) <<endl;
    radixSort(arr, 5);
    for(int i : arr) {
        cout << i << " ";
    }
    
}