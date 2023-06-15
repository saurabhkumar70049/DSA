//In this question we need to check longest odd - even alternative 
// ex - arr[] = {10, 12, 8, 3, 14} so, answer = 3 from 8 to 14

#include<bits/stdc++.h>
using namespace std;

// int even_odd(int arr[], int n) {
//     int i = 0, max_count = 0;
//     int count = 0;
//     while(i < n) {
//         if (arr[i]%2 == 0) {
//             count++;
//             i++;
            
//         }
//         else {
//             count = 0;
//         }
//         max_count = max(max_count, count);

//         if (arr[i]%2 == 1) {
//             count++;
//             i++;
//         }
//         else {
//             count = 0;
//         }
//         max_count = max(max_count, count);
//     }
//     return max_count;
// }


int even_odd(int arr[], int n){
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++) {
        if ((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0)) {
            curr++;
            res = max(res, curr);
        }
        else {
            curr = 1;
        }
    }
    return res;

}

int main() {
    int arr[] = {7, 10, 13, 14};
    cout << even_odd(arr, 4);
}