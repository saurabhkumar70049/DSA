#include<bits/stdc++.h>
using namespace std;

int hoarePartision(int arr[], int l, int h) {
    int i = l-1, j = h+1, pivot = arr[l];
    while(true) {
        do {
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j) {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

void quickSort(int arr[], int l, int h) {
    if(l < h) {
        int p = hoarePartision(arr, l , h);
        quickSort(arr, l, p);
        quickSort(arr, p+1, h);

    }
}

int main() {
    int arr[] = {8, 4, 7, 9, 3, 10, 8};
    quickSort(arr, 0, 6);
    for(int a : arr) {
        cout << a << " ";
    }
}