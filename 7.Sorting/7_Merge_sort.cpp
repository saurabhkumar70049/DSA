#include<bits/stdc++.h>
using namespace std;

void mergeArray (int arr[], int low, int mid, int high) {
    
    int n1 = mid-low+1, n2 = high - mid;
    int arr1[n1], arr2[n2];
    for (int i = low; i < n1+low; i++) {
        arr1[i-low] = arr[i];
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[mid+1+i];
    }
    int i1 = 0, i2 = 0, index = low;
    while(i1 < n1 && i2 < n2) {
        if (arr1[i1] < arr2[i2]){
            arr[index] = arr1[i1];
            i1++;
        }
        else {
            arr[index] = arr2[i2];
            i2++;
        }
        index++;
    }
    while(i1 < n1) {
        arr[index] = arr1[i1];
        i1++;
        index++;
    }
    while(i2 < n2) {
        arr[index] = arr2[i2];
        i2++;
        index++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = low + (high-low)/2; //this is similar to (l+h)/2 but it is better to use when low and high too bigger number
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        mergeArray(arr, low, mid, high);
        
    }
}

int main() {
    int arr[] = {9,2,7,8,1};
    mergeSort(arr, 0, 5-1);
    for (int i : arr) {
        cout << i << " ";
    }
}