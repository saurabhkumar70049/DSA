// Given an unsorted array that contains even number of occurrences for all numbers
// except two numbers. Find the two numbers which have odd occurrences in O(n) time complexity and O(1) extra space.

#include <bits/stdc++.h>
using namespace std;

// int occurrance(int arr[], int n){
//     int rest = 0;
//     for (int i = 0; i < n; i++){
//         rest = rest^arr[i];
//     }
//     return rest;
// }

// void solve(int arr[], int n) {
//     int xor1 = occurrance(arr, n);
//     int right_most_bit = (xor1) & (-xor1);
//     int arr1[n], arr2[n], size1 = 0, size2 = 0;
//     for (int i = 0; i < n; i++) {
//         if ((arr[i] & right_most_bit) == right_most_bit) {
//             arr1[size1] = arr[i];
//             size1++;
//         }
//         else {
//             arr2[size2] = arr[i];
//             size2++;
//         }

//     }
//     cout << "first number : " << occurrance(arr1, size1) << endl;
//     cout << "Second number : " << occurrance(arr2, size2) << endl;


// }
void solve (int arr[], int n) {   // time complexity = O(N)
    int xor1 = arr[0];
    for (int i = 1; i < n; i++) {
        xor1 = xor1^arr[i];   //  Every Set bit** in xor1 indicates that ‘the corresponding bits in x and y have values different from each other
    }
    //remember
    int right_most_bit = xor1 & (-xor1);   // (xor1) & (-xor1) will give us right set bit

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (right_most_bit & arr[i]) {
            x = x^arr[i];
        }
        else {
            y = y^arr[i];
        }
    }
    cout << x << " " << y;
}

int main() {
    
    int arr[] = {4, 2, 4, 10, 2, 3, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr, n);
}

//Another solution would be using map O(n) time and O(n) extra space solution