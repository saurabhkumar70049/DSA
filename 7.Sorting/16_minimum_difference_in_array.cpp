/*Given an array and we need tell what is the minimum diff betweeen any two element
Example --> arr = {10, 20, -1, 9, 0}
output --> 1
*/

#include<bits/stdc++.h>
using namespace std;

// int minimumDifference(int arr[], int n) {
//     int ans = INT_MAX;
//     for(int i = 0; i < n-1; i++) {
//         for(int j = i+1; j < n; j++) {
//             ans = min(ans, abs(arr[j]-arr[i]));
//         }
//     }
//     return ans;
// }

int minimumDifference(int arr[], int n) { // time complexity = O(nlogn)
    sort(arr, arr+n);
    int ans = INT_MAX;
    for(int i = 1; i < n; i++) {
        ans = min(ans, (arr[i]-arr[i-1]));
    }
    return ans;
}

int main() {
    int arr[] = {9, 1, 11, -1, 7};
    cout << minimumDifference(arr, 5);
}