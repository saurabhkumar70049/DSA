//IMPORTANT


#include<bits/stdc++.h>
using namespace std;

// int repeatingElement(int arr[], int n) {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[j] == 0) {
//             return j;
//         }
//         int k = j;
//         j = arr[j];
//         arr[k] = 0; // here we did modification but modification not allowed
//     }
// }

// int repeatingElement(int arr[], int n) { // array start from 1
//     int slow = arr[0], fast = arr[0];
//     do {
//         slow = arr[slow];
//         fast = arr[arr[fast]];
//     }while(slow != fast);
//     slow = arr[0];
//     while(slow != fast) {
//         slow = arr[slow];
//         fast = arr[fast];
//     }
//     return slow;
// }

int repeatingElement(int arr[], int n) { // array starting from 0
    int slow = arr[0]+1, fast = arr[0]+1;
    do {
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;
    }while(slow != fast);
    slow = arr[0] + 1;
    while(slow != fast) {
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }
    return slow - 1;
}

int main() {
    int arr[] = {0,1,2,3,4,0};
    cout << "Repeating element : " << repeatingElement(arr, 6);
}