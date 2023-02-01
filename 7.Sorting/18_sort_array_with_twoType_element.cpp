/*Given an array. We need to sort the array on basis of negative positive and binary and even odd
input --> arr[] = {1, 10, -4, 9}
output --> arr[] = {-4, 10, 1, 9}*/


#include<bits/stdc++.h>
using namespace std;

// void hoareSort(int arr[], int low, int high) { //this function is writen for negative and positive seperation
//     int i = low-1, j = high+1;                   // input = 15,-5,-2,10 || output = -2,-5, 15, 10
//     while(true) {
//         do {
//             i++;
//         }while(arr[i] < 0);
//         do{
//             j--;
//         }while(arr[j] > 0);
//         if(i >= j) {
//             return;
//         }
//         swap(arr[i], arr[j]);
//     }
// }

void lomudoSort(int arr[], int low, int high) {
    int i = low-1, j = low;
    while(j <= high) {
        if(arr[j] < 0) {
            swap(arr[j] , arr[i+1]);
            i++;
        }
        j++;
    }
}

// void hoareSort(int arr[], int low, int high) { //this function is written on binary seperation 
//     int i = low - 1, j = high + 1;               // input = {1,0,1,1} || output = {0, 0, 1, 1}
//     while(true) {
//         do{
//             i++;
//         }while(arr[i] == 0);
//         do{
//             j--;
//         }while(arr[j] == 1);
//         if(i >= j) {
//             return;
//         }
//         swap(arr[i], arr[j]);
//     }
// }

// void hoareSort(int arr[], int low, int high){  // this function seperate odd and even number
//     int i = low-1, j = high + 1;                // input = {15,10,11,12} || output = {12, 10, 11, 15}
//     while(true) {
//         do{
//             i++;
//         }while(arr[i]%2 == 0);
//         do{
//             j--;
//         }while(arr[j]%2 != 0);
//         if(i >= j) {
//             return;
//         }
//         swap(arr[i], arr[j]);
//     }
// }

int main() {
    int arr[] = {15,-1,11,-12};
    // hoareSort(arr, 0, 4-1);
    lomudoSort(arr, 0, 4-1);
    for(int i : arr) {
        cout << i << " ";
    }
}