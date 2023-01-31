/*
--> the basic concept of this algo is similar to lomuto partision but there are some difference are given below
    1. hoare partision work better in compare lomuto partision (in terms of execusion of loop)
    2. this algo take first element as pivot element 
    3*. In this algo we don't fix the position of pivot element 
    4. we find index j where j to 0 is smaller element as compare to pivot and j+1 to n-1 is (pivot <=).
    5. both algo is not stable because of one single case and that is when all the element is similar


--> example {4, 9, 1, 3, 10, 11} 
    pivot = 4, low = 0, high = 5;
    i = low-1(-1), j = high+1(6)
    output = {1, 3, 10, 9, 4, 11} // hoare partision garantee left of element less than pivot and right part of element greater and equal to pivot
*/


#include<bits/stdc++.h>
using namespace std;

int hoarePartision(int arr[], int low, int high) {
    int i = low-1, j = high+1, pivot = arr[low];
    while(true) {
        do {
            i++;
        }while(arr[i] < pivot);
        do {
            j--;
        }while(arr[j] >= pivot);
        if(i >= j) {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {2, 1, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << hoarePartision(arr, 0, n-1)<<endl;
    for(int i : arr) {
        cout << i << " ";
    }
}