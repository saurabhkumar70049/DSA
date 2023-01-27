/*
given an array and take a partision element and place it at position where left side of array elements less than and right side of element greater than 
ex -- arr[] = {2,4,9,1,10,7}, arr[p] = 7;
    output = {2,4,1,7, 9, 10}
*/

#include<bits/stdc++.h>
using namespace std;


void partision(int arr[], int l, int h, int p){
    int temp[h - l + 1], index = 0;
    for(int i = l; i <= h; i++) {
        if(arr[p] >= arr[i]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i = l; i <= h; i++) {
        if(arr[p] < arr[i]) {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i<= h; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int arr[] = {2,4,9,1,10,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    partision(arr, 0, n-1, n-1);
    for(int i : arr) {
        cout << i << " ";
    }
    

}