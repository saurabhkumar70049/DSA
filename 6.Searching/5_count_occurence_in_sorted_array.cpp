// how many time element occures in array. (log n)
// arr= [1, 4, 4, 5, 5, 5] 
// input = 5
// output = 3
// so the basic concept is find out index of first occurence and last occurence then subtract first from last and add 1

#include<bits/stdc++.h>
using namespace std;

// int count_element(int arr[], int f, int l, int n, int key) {
//     if (f > l) {
//         return 0;
//     }
//     int mid = (f+l)/2;
//     if(arr[mid] > key) {
//         return count_element(arr, f, mid -1 , n, key);
//     }
//     else if(arr[mid] < key) {
//         return count_element(arr, mid + 1, l , n, key);
//     }
//     else {
//         if (arr[mid -1] == key && arr[mid+1] == key){
//             return 1+ count_element(arr, f, mid -1 , n, key) + count_element(arr, mid + 1, l , n, key);

//         }
//         else if (arr[mid -1] == key || mid == 0) {
//             return 1 + count_element(arr, f, mid -1 , n, key);
//         }
//         else if(arr[mid + 1] == key || mid == n-1){
//             return 1 + count_element(arr, mid + 1, l , n, key);
//         }
//     }
// }
int first_index(int arr[], int f, int l, int key) {
    if (f > l) {
        return -1;
    }
    int mid = (f+l)/2;
    if (arr[mid] < key) {
        return first_index(arr, mid+1, l, key);
    }
    else if(arr[mid] > key) {
        return first_index(arr, f, mid-1, key);
    }
    else {
        if (arr[mid - 1] != key || mid == 0) {
            return mid;

        }
        else {
            return first_index(arr, f, mid-1, key);
        }
    }
    return -1;
}

int last_index(int arr[], int f, int l, int n, int key) {

    int mid = (f+l)/2;
    if (arr[mid] < key) {
        return last_index(arr, mid+1, l, n, key);
    }
    else if(arr[mid] > key) {
        return last_index(arr, f, mid-1, n, key);
    }
    else {
        if (arr[mid + 1] != key || mid == n-1) {
            return mid;
        }
        else {
            return last_index(arr, mid + 1, l, n, key);
        }
    }
    
}

int count_element(int arr[], int f, int l, int key) {
    int first = first_index(arr, f, l, key);
    
    if (first == -1) {
        return 0;
    }
    else {
        return (last_index(arr, f, l, l+1, key) - first + 1);
    }
}

int main() {
    int arr[] = {10, 10, 10, 10, 10};
    int key;
    cin >> key;
    cout << count_element(arr, 0, 5 - 1, key);
}
