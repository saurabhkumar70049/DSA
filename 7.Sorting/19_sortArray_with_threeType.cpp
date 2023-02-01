#include<bits/stdc++.h>
using namespace std;

void hoareSort(int arr[], int low, int high) {
    int i = low-1, j = i+1, k = high+1;
    while(true) {
        // cout << j << " ";
        do{
            i++;
        }while(arr[i] == 0);
        do{
            j--;
        }while(arr[j] > 0);
        
        if(i >= j) {
           
            low = j;
            return;
        }
        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {0, 1, 2, 1, 0, 0, 1, 2};
    hoareSort(arr, 0, 8-1);
    for(int i : arr) {
        cout << i << " ";
    }
}