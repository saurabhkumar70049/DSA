#include<bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int n, int key) {
    int first = 0, last = n-1;
    while(first <= last) {
        int mid = (first+last)/2;
        if(arr[mid] == key) {
            if(mid == 0 || arr[mid-1] != key){
                return mid;
            }
            last = mid-1;
        }
        else if(arr[mid] > key) {
            last = mid-1;
        }
        else {
            first = mid+1;
        }
    }
}

int lastIndex(int arr[], int n, int key) {
    int first = 0, last = n-1;
    while(first <= last) {
        int mid = (first+last)/2;
        if(arr[mid] == key) {
            if(mid == n-1 || arr[mid+1] != key){
                return mid;
            }
            first = mid+1;
        }
        else if(arr[mid] > key) {
            last = mid-1;
        }
        else {
            first = mid+1;
        }
    }
}

int countElement(int arr[], int n, int key) {
    return (lastIndex(arr, n, key) - firstIndex(arr, n, key)) +1;
}

int main() {
    int arr[] = {4, 8, 9, 9, 9, 14, 14, 18, 22};
    int n;
    cin >> n;

    cout << countElement(arr, 9, n);
}