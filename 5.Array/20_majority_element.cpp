// find majority element {think like election}
// {1,8,8,3,3,8,8} = 8(4 times > n/2) 
#include<bits/stdc++.h>
using namespace std;

// int majority(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int count = 1;
//         for (int j = i+1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count > n/2) {
//             return i;
            
//         }
        
//     }
//     return -1;
// }

// how to think -- if it talk about majority then obviously appearance should be more than half of the element. if we have a majority element then res must indicate that element but we will not have it show wrong element 
int majority(int arr[], int n) {
    int res = 0, count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[res]) {
            count++;
        }
        else {
            count--;
        }
        if (count == 0) {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[res] == arr[i]) {
            count++;
        }
        if (count > n/2) {
            return res;
        }
    }
    return -1;

}

int main() {
    int arr[] = {8, 3, 3, 8, 8};
    cout << majority(arr, 5); 
}