//remove duplicate element from sorted array
#include <bits/stdc++.h>
using namespace std;

int unique_arr(int arr[], int n) {
    int j = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] != arr[i]) {
            j++;
        }
    }
    return j;
}


// void duplicate(int arr[], int n) {  //first method

    // int arr1[n];                   //// time and space comlexity = O(N)  
//     arr1[0] = arr[0];
//     int rest = 1;
//     for (int i = 0; i < n; i++) 
//     {
//         if (arr1[rest-1] != arr[i] ) {
//             arr1[rest] = arr[i];
//             rest++;
//         }
//     }
//     for (int i = 0; i < rest; i++) {
//         arr[i] = arr1[i];
//     }
//     for(int i = 0; i < rest; i++) {
//         cout << arr[i] << " ";
//     }
    
// }


void duplicate(int arr[], int n) {
    int rest = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] != arr[i]) {
            arr[rest] = arr[i];
            rest++;
        }
    }
    for (int i = 0; i < rest; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {2, 5, 5, 9, 9, 9, 4, 4, 4, 4};
    int count = unique_arr(arr, 10);
    cout << "UNIQUE numbers : " << count << endl;
    duplicate(arr, 10);
    
}