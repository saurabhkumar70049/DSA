#include <bits/stdc++.h>
using namespace std;

// int cal_first(int arr[], int n) {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[j] < arr[i]) {
//             j = i;

//         }
//     }
//     return j;
// }

// int cal_second(int arr[], int n) {
//     int lar = cal_first(arr, n);
//     int temp = -1;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != arr[lar]) {
//             if (temp == -1) {
//                 temp = i;
//             }
//             else if (arr[temp] < arr[i]) {
//                 temp = i;
//             }
//         }
//     }
//     return temp;
// }


int cal_second(int arr[], int n) {
    int res = -1, j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[j] < arr[i]) {
            res = j;
            j = i;
        }
        else if (arr[i] != arr[j]) {
            if (res == -1 || arr[i] > arr[res]) {
                res = i;
            }
            
        }
    }
    return res;

}

int main() {
    int arr[] = {20, 8, 20, 15};
    cout << "Second largest element present at index : " << cal_second(arr, 4);
}