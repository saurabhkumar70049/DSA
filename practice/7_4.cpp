#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && temp < arr[j]){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = temp;
    }
}

int main() {
    int arr[] = {9, 2, 3, 1, 5, 14};
    insertionSort(arr, 6);
    for(int i : arr) {
        cout << i << " ";
    }
}