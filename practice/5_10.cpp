#include <bits/stdc++.h>
using namespace std;

void swap_a(int arr[], int i, int j) {
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}


void shift_d(int arr[], int n, int d) {
    // for (int i = 0; i < (n-d)/2; i++) {
    //     swap_a(arr, i, n-d-i-1);

    // }
    // int j = 1;
    // for (int i = n-d; i < (n+d)/2; i++) {
    //     swap_a(arr, i, n-j);
    //     j++;
        
    // }
    // for (int i = 0; i < n/2; i++) {
    //     swap_a(arr, i, n-i-1);
        
    // }
    swap_a(arr, 0, n-d-1);
    swap_a(arr, n-d, n-1);
    swap_a(arr, 0, n-1);

}

int main() {
    int arr[5] = {2,8,9,1,7};
    cout << "enter d : ";
    int d;
    cin >> d;
    shift_d(arr, 5, d);
    for (int i= 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}