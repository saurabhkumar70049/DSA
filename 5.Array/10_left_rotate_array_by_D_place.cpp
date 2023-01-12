#include<bits/stdc++.h>
using namespace std;

// void rotate_arr(int arr[], int n, int d) {   //time complexity = O(n*d) and space = O(1)
//     int temp;
//     for (int i = 1; i <= d; i++) {
//         temp = arr[0];
//         for (int i = 1; i < n; i++) {
//             arr[i - 1] = arr[i];
//         }
//         arr[n - 1] = temp;
//     }
// }

// void rotate_arr(int arr[], int n, int d) {  // time complexity = O(n) and space = O(n)
//     int arr1[n];
//     int j = 0, s = 0;
//     for (int i = d; i < n; i++) {
//         arr1[j] = arr[i];
//         j++;
//     }
//     for (int i = j; i < n; i++) {
//         arr1[i] = arr[s];
//         s++;
//     }

//     for (int i = 0; i < n; i ++) {
//         cout << arr1[i] << " ";
//     }
// }

// void rotate_arr(int arr[], int n, int d) {  //time complexity = O(n) and space = O(d)
//     int temp[d];
//     for (int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }

//     for (int i = 0; i < n-d; i++) {
//         arr[i] = arr[i + d];
//     }

//     for (int i = n-d; i < n; i++) {
//         arr[i] = temp[i-n+d];
//     }
// }

void reverse_element(int arr[], int low, int high){
    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void rotate_arr(int arr[], int n, int d) { // time complexity = O(N) and Aux. space = O(1)
    reverse_element(arr, 0, d-1);
    reverse_element(arr, d, n-1);
    reverse_element(arr, 0, n-1);
}

// void rotate_arr(int arr[], int n, int d) {
//         for(int i = 0; i < d/2; i++) {
//             swap(arr[i], arr[d-1-i]);
//         }
//         for (int i = 0; i < (n-d)/2; i++) {
//             swap(arr[i+d], arr[n-1-i]);
//         }
//         for (int i = 0; i < n/2; i++) {
//             swap(arr[i], arr[n-1-i]);
//         }
//         for(int i = 0; i < n; i++) {
//             cout << arr[i] << " ";
//         }

// }

int main() {
    int arr[] = {3, 9, 4, 10, 11}; 
    cout << "Enter D less than 5 : ";
    int d;
    cin >> d;
    rotate_arr(arr, 5, d);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

}