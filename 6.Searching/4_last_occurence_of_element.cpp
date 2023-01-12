//find last occurence of element in O(log n)
// arr = [10, 11, 11, 56, 56, 90] 
// input = 56
// output = 4 -- (index)


#include<bits/stdc++.h>
using namespace std;

int occurence_last(int arr[], int f, int l, int key) {
    int n = l;
    while(f <= l) {
        int mid = (f+l)/2;
        if (arr[mid] == key) {
            if(arr[mid+1] != key || mid == n) {
                return mid;
            }
            f = mid + 1;
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
    int arr[] = {5, 8, 8, 10, 15, 15};
    int key;
    cin >> key;
    cout << occurence_last(arr, 0, 6-1, key);
}