// IN this question we need to find equilibrium point in array like left and right size sum should be equal
// arr[6] = {3, 5, 8, -9, 9, 7};
// left and right size sum of -9 is equal


#include <bits/stdc++.h>
using namespace std;

// bool equilibrium_point(int arr[], int n) {
//     int ls = 0, rs = 0;
//     for (int i = 0; i < n; i++) {
//         ls = 0, rs = 0;
//         for (int j = 0; j < i; j++) {
//             ls += arr[j];
//         }
//         for(int s = i+1; s < n; s++) {
//             rs += arr[s];
//         }
//         if (ls == rs) {
//             cout << arr[i] << " ";
//             return true;
//         }
//     }
//     return false;
// }

// bool equilibrium_point(int arr[], int n) {
//     int ls[n], rs[n] ;
//     ls[0] = arr[0], rs[n-1] = arr[n-1];
//     for (int i = 1; i < n; i++) {

//         ls[i] = ls[i-1] + arr[i];
//         // cout << ls[i] << " ";
//     }
//     cout << endl;
//     for (int i = n-2; i >= 0; i--) {
//         rs[i] = rs[i+1] + arr[i];
//     }
//     for (int i = 1; i < n-1; i++) {
//         if (ls[i-1] == rs[i+1]){
//             cout << arr[i] << " ";
//             return true;
//         }
//     }
//     return false;
// }


bool equilibrium_point(int arr[], int n) {
    int rs = 0, ls = 0;
    for (int i = 0; i < n; i++) {
        rs += arr[i];
    
    }

    for (int i = 0; i < n; i++) {
        rs -= arr[i];
        
        if (ls == rs) {
            cout << arr[i] << endl;
            return true;
        }
        ls += arr[i];
    }
    return false;
}


int main() {
    int arr[6] = {2,3,-1,8,4};
    equilibrium_point(arr, 5) == 1 ? cout << "YES" : cout << "NO";

}