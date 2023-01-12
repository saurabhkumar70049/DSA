/* 
find out three pair of element from array which adding is equal to key
    arr[] = {3, 5, 8, 33, 40}
    key = 51
    output = true  (3+8+40)

1 method (naive solution) -- take three loop and see the sum;
2nd method (two pointer technique) -- take two pointer which sum is less than key and then find out third one 
                                       in between these pointer

NOTE* = if we have a unsorted array then also time complexity would be O(n^2) because use just sort that have
time complexity O(nlogn)
    O(nlogn) + O(n^2) = O(n^2)
*/



#include<bits/stdc++.h>
using namespace std;


// bool checkTriplet(int arr[], int n, int sum) {
//     for (int i = 0; i < n-2; i++) {
//         int k = i+1;
//         int j = n-1;
//         while(k < j) {
//             if ((arr[i]+arr[k]+arr[j]) == sum ) {
//                 cout << arr[i] << " " << arr[k] << " " << arr[j] << endl;
//                 return true;
//             }
//             else if((arr[i]+arr[k]+arr[j]) > sum){
//                 j--;
//             }
//             else {
//                 k++;
//             }
//         }
//     }
//     return false;
// }

bool checkTriplet(int arr[], int n, int sum) {
    int i = 0, j = n-1;
    while(i < j) {
        
        if((arr[i]+arr[j]) < sum) {
            // cout << arr[j] << endl;
            for (int k = i+1; k < j; k++) {
                if((arr[i]+arr[j]+arr[k]) == sum) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    return true;
                }
            }
            i++;
        }
        else {
            j--;
        }
    }
    return false;
}

int main() {
    int arr[] = {2,3,4,8,10,20,40};
    cout << "Enter sum : " ;
    int sum;
    cin >> sum;
    cout << checkTriplet(arr, 7, sum);
}