// we have a given sum and we need to find a subarray which is equal to the sum 
// ex = [1, 2, 9, 7, 3]
// sum = 16
// output = Yes



#include <bits/stdc++.h>
using namespace std;

// bool subarray_sum(int arr[], int n, int sum){
//     int res;
//     for (int i = 0; i < n; i++) {
//         res = 0;
//         for (int j = i; j < n; j++) {
//             res += arr[j];
//             if (res == sum) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }



bool subarray_sum(int arr[], int n, int sum) { 
    int res = 0, count = 0;
    for (int i = 0; i < n; i++) {    //window sliding technique
        res += arr[i];
        while (res > sum) {
            res -= arr[count];
            count++;
        }
        if (sum == res) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[6] = {1, 4, 3, 10, 20, 8};
    int sum;
    cout << "enter Sum : " ;
    cin >> sum;
    subarray_sum(arr, 6, sum) == 1 ? cout << "YES" : cout << "NO";
}