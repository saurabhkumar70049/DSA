// Here we need to make merge two sorted in sorted form
// exmple : arr1 = [2,4,8,9], arr2 = [1,4,9] 
// output : arr3 = [1,2,4,4,8,9,9]

#include<bits/stdc++.h>
using namespace std;

// void mergeArray(int arr1[], int arr2[], int n1, int n2) {
//     int arr3[n1+n2] = {INT_MIN};
//     int i1 = 0, i2 = 0;
//     for (int i = 0; i < n1+n2; i++) {
//         if(((i1<n1) && (arr1[i1] <= arr2[i2])) || (i2 == n2)){
//             arr3[i] = arr1[i1];
//             i1++;
//         }
//         else {
//             arr3[i] = arr2[i2];
//             i2++;
//         }

//     }
//     for(int i = 0; i <n1+n2; i++) {
//         cout << arr3[i] <<" ";
//     }
// }


void mergeArray(int arr1[], int arr2[], int n1, int n2) {
    int arr3[n1+n2];
    int i1 = 0, i2 = 0, j = 0;
    while(i1 < n1 && i2 < n2) {
        if (arr1[i1] <= arr2[i2]) {
            arr3[j] = arr1[i1];
            j++;
            i1++;
        }
        else {
            arr3[j] = arr2[i2];
            j++;
            i2++;
        }
    }
    
    while(i1 < n1) {
        arr3[j] = arr1[i1];
        i1++;
        j++;
    }
    while(i2 < n2) {
        arr3[j] = arr2[i2];
        i2++;
        j++;
    }
    for(int i = 0; i <n1+n2; i++) {
        cout << arr3[i] <<" ";
    }
}

int main() {
    int arr1[] = {3, 5, 13, 14};
    int arr2[] = {0, 2, 4, 8, 12};
    mergeArray(arr1, arr2, 4, 5);

}