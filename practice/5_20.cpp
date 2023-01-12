#include <bits/stdc++.h>
using namespace std;

int majority_element(int arr[], int n) {
    int res = 0, count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[res]) {
            count++;
        }
        else {
            count--;
        }

        if (count == 0) {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[res] == arr[i]){
            count++;
        }
        if (count > n/2) {
            return res;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {8, 3, 4, 8, 8};
    cout << majority_element(arr, 5);
}