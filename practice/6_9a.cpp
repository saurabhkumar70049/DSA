#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int first = 0, last = n-1;
    while(first <= last) {
        int mid = (first+last)/2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[first] <= arr[mid]) {
            if(arr[mid] > key && arr[first] <= key) {
                last = mid-1;
            }
            else {
                first = mid+1;
            }
        }
        else {
            if(arr[mid] <  key && arr[last] >= key) {
                first = mid+1;
            }
            else {
                last = mid-1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 40, 60, 5, 8};
    int key = 8;
    cout << binarySearch(arr, 6, key);
}