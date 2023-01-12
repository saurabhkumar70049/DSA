#include <bits/stdc++.h>
using namespace std;

int s_large(int arr[], int n) {
    int res = -1, j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[j] < arr[i]) {
            res = j;
            j = i;
        }
        else if (arr[j] != arr[i]) {
            if(res == -1 || arr[res] < arr[i]){   //res == -1 for index 0 is largest and arr[res] < arr[i] for when second largest element exist in right side of largest
                res = i;
            }
        }
    }
    return arr[res];
}


int main() {
    int arr[] = {4, 10, 5, 3, 9};
    cout << "Second largest element in array : " << s_large(arr, 5);
}