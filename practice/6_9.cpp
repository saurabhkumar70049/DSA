#include<bits/stdc++.h>
using namespace std;

int indexOfKey(int arr[], int n, int key) {
    int i = 0, j = n-1;
    while(i <= j) {
        int mid = i + (j - i)/2;
        if (arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] >= arr[i]) {
            if(arr[mid] > key && key >= arr[i]) {
                j = mid-1;
            }
            else {
                i = mid+1;
            }
        }
        else {
            if(arr[mid] < key && key <= arr[j]) {
                i = mid+1;
            }
            else {
                j = mid-1;
            }
        }
    }
}

int main() {
    int arr[] = {10, 20, 40, 60, 5, 8};
    int key = 60;
    cout << "Index of key : " << indexOfKey(arr, 6, key);
}