#include <bits/stdc++.h>
using namespace std;

int binary_sea(int arr[], int f, int l, int key) {
    while(f <= l) {
        int mid = (f+l)/2;
        
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            f = mid+1;
        }
        else {
            l = mid -1;
        }
    }
    return -1;
}

int search_key(int arr[], int n, int key) {
    if (arr[0] == key) {
        return 0;
    }
    int i = 1;
    int f = 0;
    while(arr[i] <= key) {
        if (arr[i] == key) {
            return i;
        }
        f = i;
        i = 2*i;
    }
    
    return binary_sea(arr, f, i, key);
}

int main() {
    int arr[] = {20, 40, 50, 70, 90, 120, 190, 200, 240}; //let be a infinite 
    int key = 200;
    cout << search_key(arr, 9, key);
}