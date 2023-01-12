// arr[] = {8, -4, 3, -5, 6} 
// max_subarray = {6, 8} = 14

// arr[] = {4, 3, -6, -2}
// max_subarray = {4, 3} = 7



#include<bits/stdc++.h>
using namespace std;


// int circular_max(int arr[], int n) { //naive method { time complexity = O(N^2)}
//     int max_res = arr[0];
//     for(int i = 0; i < n; i++) {
//         int curr = arr[i];
//         int res = arr[i];
//         for (int j = 1; j < n; j++) {
//             int index = (i+j)%n;
//             curr += arr[index];
//             res = max(curr, res);
//         }
//         max_res = max(max_res, res);
//     }
//     return max_res;
// }

// int circular_max(int arr[], int n) {
//     int curr = arr[0], max_sum = arr[0];
//     for (int i = 1; i < n; i++) {
//         curr = max(arr[i], arr[i]+curr);
//         max_sum = max(curr, max_sum);
//     }
    
//     for(int i = 1; i < n; i++) {
//         curr = 0;
//         for(int j = i; j < n+i; j++) {
//             curr += arr[j % n];
//             max_sum = max(curr, max_sum);
//         }

//     }
//     return max_sum;
//}

int normal_max(int arr[], int n) {
    int curr = arr[0];
    int res = arr[0];
    for (int i = 1; i < n; i++) {
        curr = max(arr[i], curr+arr[i]);
        res = max(res, curr);
    }
    return res;
}

int circular_max(int arr[], int n) {   // time complexity = O(n)
    int normal = normal_max(arr, n);
    if (normal < 0) {
        return normal;
    }
    int sum_arr = 0;
    for (int i = 0; i < n; i++) {
        sum_arr += arr[i];
        arr[i] = -arr[i];    //inverted   

    }
    int circular = sum_arr + normal_max(arr, n);
    return max(normal, circular);
}

int main() {
    int arr[] = {8, -4, 3, -5, 4};
    cout << circular_max(arr, 5);
}