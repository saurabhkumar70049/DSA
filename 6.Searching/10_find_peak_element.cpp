//find out any one peak element in array || koi bhi ek pick elment btana hai chahe koi bhi koi fark nhi pad rha hai
//   arr[] = {20, 10, 12 19, 30, 23}
// output = 20 (we need to tell only one peak element)
// naive solution would be simple, you can run a loop and find out peak
// think a binaray solution :- this is one of the odd problem where array is not sorted and we apply binary search
// so basic concept is we need only one peak element that's why we appy binary see the mid and discard the half part of arry which first 
//element is smaller than mid
// In every array there must be an peak so that's we apply binary
#include <bits/stdc++.h>
using namespace std;

// void peakElement(int arr[], int n) { // in this solution, we print all peaks
//     for (int i = 0; i < n; i++) {
//         if ((i == 0 && arr[i] > arr[i+1]) || ((i == n-1) && arr[i] > arr[i-1]) || ((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))){
//             cout << arr[i] << " ";
//         }
//     }
// }

int peakElement(int arr[], int n) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high)/2;
        if ((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid])) {
            return arr[mid];
        }
        else if(mid > 0 && arr[mid-1] > arr[mid]){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
}

int main() {
    int arr[] = {10, 20, 13, 34, 29};
    cout << "peak elements are : " << peakElement(arr, 5);;
    
}