#include<bits/stdc++.h>
using namespace std;

// bool pairAvaileble(int arr[], int n, int k) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = i+1; j < n; j++) {
//             if((arr[i]+arr[j]) == k) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool pairAvaileble(int arr[], int n, int key) {   // this two pointer technique
    int low = 0, high = n-1;
    while(low < high) {
        if (arr[low] + arr[high] == key) {
            // cout << arr[low] << " " << arr[high] << " ";
            return true;
        }
        else if((arr[low]+ arr[high]) < key){
            low++;
        }
        else {
            high--;
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 12, 15, 20, 27};
    cout << "Enter K : " ;
    int k;
    cin >> k;
    pairAvaileble(arr, 5, k) ? cout << "True" : cout << "False";
}