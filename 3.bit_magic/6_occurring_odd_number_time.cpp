//Find the Number Occurring Odd Number of Times

#include <bits/stdc++.h>
using namespace std;

// void occurrence(int arr[], int n){  // time complexity = O(n^2)
//     for (int i = 0; i < n; i++) {
//         int count = 1;
//         if (arr[i] != NULL){
//             for (int j = i+1; j < n; j++) {    
//                 if (arr[i] == arr[j]) {
//                     count++;
//                     arr[j] = NULL;
//                 }
//             }
//         }
//         if (count%2 != 0 && arr[i] != NULL) {
//             cout << arr[i] << " ";
//         }
//     }
// }

int occurrence(int arr[], int n) {   //time complexity = O(n)
    int rest = 0 ;
    for (int i = 0; i < n; i++) {
        rest = rest^arr[i];
        /*
        x^0 = x
        x^y=y^x (Commutative property holds)
        (x^y)^z = x^(y^z) (Distributive property holds)
        x^x=0
        (x ^ x ^ x) = (x ^ (x ^ x)) = (x ^ 0) = x
        x ^ x ^ x ^ x = (x ^ x) ^ (x ^ x) = 0 ^ 0 = 0
        */
    }
    return rest;
}


int main() {
    int arr[] = {2, 3, 4, 2, 4, 3, 7, 2, 4, 4, 2}; // there must be only one element occures odd number of times 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << occurrence(arr, n) ;
}