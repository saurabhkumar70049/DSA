#include <bits/stdc++.h>
using namespace std;


bool arr_sort(int arr[], int n) {
    
    for (int i = 1; i < n; i++) {
        if (arr[i-1] > arr[i]) {
            return false;
        }
        
    }
    return true;
}

int main() {
    int arr[] = {5, 9, 9, 11}; 
    cout << "sorted or not : " << arr_sort(arr, 4);
}