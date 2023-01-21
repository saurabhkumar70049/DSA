// Minimum number of group required to flip to make all array element similar
// e.x -- {1, 0, 0, 0, 1, 1, 1, 0, 1}
// output -- index 1 to 3
//           index 8 to 8

#include <bits/stdc++.h>
using namespace std;

// void flips(int arr[], int n) {
//     int no_flip = 0;
//     for (int i = 0; i < n-1; i++){
//         if (arr[i] != arr[i+1]){
//             no_flip++;
//         }
//     }
//     cout << no_flip;
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != arr[i+1]){
//             count++;
//         }
//         if (count % 2 != 0) {
//             cout << i <<
//         }

//     }
// }

// void flips(int arr[], int n) {
//     int count_0 = 0, count_1 = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != arr[i+1] && arr[i] == 1) {
//             count_1++;
//         }
//         if (arr[i] != arr[i+1] && arr[i] == 0) {
//             count_0++;
//         }
//     }
//     if (count_0 < count_1) {
//         for (int i = 0; i < n; i++) {
//             if ((arr[i] != arr[i+1] && arr[i] == 0) || (arr[i-1] != arr[i] && arr[i] ==0)) {
//                 cout << i << " ";
//             }

//         }
//     }
//     else {
//         for (int i = 0; i < n; i++) {
//             if ((arr[i] != arr[i+1] && arr[i] == 1) || (arr[i-1] != arr[i] && arr[i] ==1)) {
//                 cout << i << " ";
//             }

//         }
//     }
    
// }
// void flips(int arr[], int n) {
//     if (arr[0] == arr[n-1]) {
//         if (arr[0] == 0) {
//             for (int i = 1; i < n; i++) {
//                 if ((arr[i-1] == 0 && arr[i] == 1) || (arr[i+1] == 0 && arr[i] == 1)){
//                     cout << i << " ";
//                 }
//             }
//         }
//         else {
//             for (int i = 1; i < n; i++) {
//                 if ((arr[i-1] == 1 && arr[i] == 0) || (arr[i+1] == 1 && arr[i] == 0)){
//                     cout << i << " ";
//                 }
//             }
//         }
//     }
//     else {
//         for (int i = 0; i < n; i++) {
//             if ((arr[i-1] != arr[i] && arr[i] == 1) || (arr[i+1] != arr[i] && arr[i] == 1)){
//                 cout << i << " ";
//             }
//         }
//         cout << endl << "OR" << endl;
//         for (int i = 0; i < n; i++) {
//             if ((arr[i-1] != arr[i] && arr[i] == 0) || (arr[i+1] != arr[i] && arr[i] == 0)){
//                 cout << i << " ";
//             }
//         }
//     }
// }


void flips(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            if (arr[i] != arr[0]){
                cout << "from " << i << " to ";
            }
            else {
                cout << i - 1<< endl;
            }
        }
    }
    if (arr[n-1] != arr[0]) {
        cout << (n-1) << endl;
    }
}

int main() {
    int arr[] = {0,1,1,0,1,1,0,1};
    flips(arr, 8);
}