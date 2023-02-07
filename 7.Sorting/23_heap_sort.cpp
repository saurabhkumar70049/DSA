#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {
    int left = 2*i + 1;
    int right = 2*i + 2;
    int larger = i;
    if(left < n && arr[left] > arr[larger]) {
        larger = left;
    }
    if(right < n && arr[right] > arr[larger]) {
        larger = right;
    }

    if(larger != i) {
        swap(arr[i], arr[larger]);

        heapify(arr, n, larger);
    }
}

void heapSort(int arr[], int n) {
    for(int i = (n/2 -1); i >= 0; i--) {
        heapify(arr, n, i); // it makes a array in form of heap data structure
    }

    for(int i = n-1; i > 0; i--) {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {5, 3, 10, 1, 7};
    heapSort(arr, 5);
    for(int i : arr) {
        cout << i << " ";
    }
}