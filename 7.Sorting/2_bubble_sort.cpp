#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i =0, s = 0;
    while(i < n) {
        for(int j = 0; j < n-i; j++) {
            if (arr[s] >= arr[j]) {
                swap(arr[s], arr[j]);
                s = j;
            }
            else {
                s++;
            }

        }
        s = 0;
        i++;

    }
}

int main() {
    int arr[] = {4, 2, 7, 9, 5};
    bubbleSort(arr, 5);
    for(int i : arr) {
        cout << i << " ";
    }
}