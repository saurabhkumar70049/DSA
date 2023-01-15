#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
    int j = 0, s = -1;
    for (int i = 1; i < n; i++) {
        if (arr[j] < arr[i]) {
            s = j;
            j = i;
        }
        else if(arr[i] != arr[j]){
            if (arr[s] < arr[i] || s == -1) {
                s = i;
            }
        }
    }
    return s;
}

int main() {
    int arr[] = {10, 10, 10, 10, 1};
    cout << secondLargest(arr, 5);
}