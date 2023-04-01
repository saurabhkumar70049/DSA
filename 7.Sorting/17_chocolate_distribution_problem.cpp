/*Given an array which contain chocolate packets and array index show that a packet contain how many 
chocolate and k number of children. Distribute the packet to the children in such way that diffence 
between maximum chocolate and minimum chocolate packet should be minimum
example --> arr[] = {10, 1, 7, 13, 2, 3};
    output --> 2
*/

#include<bits/stdc++.h>
using namespace std;

// int distribution(int arr[], int n, int k) {
//     sort(arr, arr+n);
//     int ans = INT_MAX;
//     for(int i = 0; i < n-k+1; i++){
//         ans = min(ans, abs(arr[i] - arr[i+k-1]));
//     }
//     return ans;
// }

int distribution(int arr[], int n, int k) {
    if(k > n) {
        return -1;
    }
    sort(arr, arr+n);
    int ans = arr[k-1] - arr[0];
    for(int i = 1; (i+k-1) < n; i++) {
        ans = min(ans, arr[i+k-1]-arr[i]);
    }
    return ans;
}

int main() {
    int arr[] = {10, 1, 7, 13, 5, 3};
    int k = 3;
    cout << distribution(arr, 6, k);
}