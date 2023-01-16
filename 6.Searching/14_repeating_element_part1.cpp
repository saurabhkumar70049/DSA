/*
given an array where one element appear more than one time. find the repeating element
ex      arr[] = {1, 3, 2, 2, 0, 2}
        output = 2
        arr[] = {0, 0}
        output = 0;



    there are some set of rule :-
        1. array size >=2;
        2. Only one element repeats
        3. all number from 0 to max_element present in array
        {conclusion : 0 <= max_element <= n-2}

*/

#include<bits/stdc++.h>
using namespace std;

// int repeatingElement(int arr[], int n) { // time complexity = O(n^2)
//     for (int i = 0; i < n-1; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (arr[i] == arr[j]){
//                 return arr[i];
//             }
//         }
//     }
// }

// int repeatingElement(int arr[], int n) { //time complexity = O(nlogn)
//     sort(arr, arr+n);
//     for (int i = 0; i < n-1; i++) {
//         if (arr[i] == arr[i+1]) {
//             return arr[i];
//         }
//     }
// }

// int repeatingElement(int arr[], int n) { // time complexity = O(n) and space complexity = O(n)
//     int freq[n-1] = {0};
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }
//     for (int i = 0; i < n-1; i++) {
//         cout << freq[i] << " ";
//     }
    
//     int j = 0;
//     for (int i = 1; i < n-1; i++) {
//         if (freq[j] < freq[i]) {
//             j = i;
//         }
//     }
//     return j;
// }


int repeatingElement(int arr[], int n) {  // more efficent than previous one but complexity would be same
    bool freq[n-1] = {false};
    for (int i = 0; i < n; i++) {
        
        if (freq[arr[i]]) {
            return arr[i];
        }
        freq[arr[i]] = true;
    }
}

int main() {
    int arr[] = {0,1,2,3,4,2};
    cout << "Repeating element : " << repeatingElement(arr, 6);
}