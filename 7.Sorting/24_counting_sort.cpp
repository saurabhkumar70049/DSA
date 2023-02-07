#include<bits/stdc++.h>
using namespace std;

// void countingSort(int arr[], int n, int k) { // this algorithm is not usable in general purpose object
//     int arr1[k] = {0};                          // time complexity = O(n+k);
//     for(int i = 0; i < n; i++) {    
//         arr1[arr[i]]++;
//     }
//     // for(int s : arr1) {
//     //     cout << s << " ";
//     // }
//     // cout << endl;
//     int j = 0;
//     for(int i = 0; i < k; i++) {
//         if(arr1[i] != 0) {
//             for(int k = 1; k <= arr1[i]; k++) {
//                 arr[j] = i;
//                 j++;
//             }
//         }
//     }
// }

void countingSort(int arr[], int n, int k) {
    int noElement[k] = {0};
    for(int i = 0; i < n; i++) {
        noElement[arr[i]]++;
    }
    for(int i = 1; i < k; i++) {
        noElement[i] += noElement[i-1];
    }
    for(int s : noElement) {
        cout << s << " ";
    }
    int output[n];
    for(int i = n-1; i >= 0; i--) {
        output[noElement[arr[i]] - 1] = arr[i];
        noElement[arr[i]]--;
    }
    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

}

int main() {
    int arr[] = {2, 8, 3, 2, 6};
    int k = 9;
    countingSort(arr,5, k);
    for(int i : arr) {
        cout << i << " ";
    }
}