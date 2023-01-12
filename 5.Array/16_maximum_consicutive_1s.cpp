#include<bits/stdc++.h>
using namespace std;

int max_1(int arr[], int n) {
    int count = 0, max1 = 0;
    for (int i = 0; i < n; i++) {
        
        // if (arr[i] == 1) {
        //     count++;
        // }
        // else {
        //     count = 0;
        // }

        // max1 = max(max1, count);
        if (arr[i] == 0) {
            count = 0;
        }
        else {
            count++;
            max1 = max(max1, count);
        }
    }
    return max1;
}

int main() {
    int arr[] = {0, 1, 0, 0, 1, 1, 1};
    cout << max_1(arr, 7);
}