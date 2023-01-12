// In this question, find first occurence of element in O(logn)
// arr[] = {3, 10, 10, 13, 13}
// output = 1  --(index)

#include <bits/stdc++.h>
using namespace std;

int occurence_first(int arr[], int f, int l, int key) {
    while(f <= l) {
        int mid = (f+l)/2;
        if (arr[mid] == key) {
            if(arr[mid-1] != key || mid == 0) {
                return mid;
            }
            l = mid -1;
        }
        else if(key > arr[mid]) {
            f = mid + 1;
        }
        else {
            l = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 8, 8, 10,10 , 15};
    int key;
    cin >> key;
    cout << occurence_first(arr, 0, 6-1, key);
}