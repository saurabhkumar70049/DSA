#include<bits/stdc++.h>
using namespace std;

void partision(int arr[], int l, int h){
    int p = h;
    int i = l-1;
    for(int j = l; j < h; j++) {
        if(arr[j] <= arr[p]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[p]);
}

int main() {
    int arr[] = {2,4,9,1,10,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    partision(arr, 0, n-1);
    for(int i : arr) {
        cout<< i << " ";
    }
}