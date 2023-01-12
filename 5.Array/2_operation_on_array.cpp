#include <bits/stdc++.h>
using namespace std;

// void search_e(int arr[], int key, int index) {
//     if (arr[index] == key) {
//         cout << "index : " << index ;
//         return;
//     }
//     search_e(arr, key, index+1);
    
// }

void search_e(int arr[], int key, int n) {      //linear search O(n)
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout<< i << endl;
            return;
        }
    }
    cout << "not present" << endl;
}

void insertion_a(int arr[], int key, int n) {
    cout << "insertion at last position" << endl;
    n = n+1;
    arr[n -1] = key;
    cout << "new array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "insetion at first position" << endl;
    n = n+1;
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = key;
    cout << "new array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "insertion at any position " << endl;
    int pos = 3;
    n = n+1;
    for (int i = n-1; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = key;
    cout << "new array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "delete operation : " << endl;
    int index = 3;
    for (int i = index; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n = n-1;
    cout << "new array" << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;



}

int main() {
    int arr[4] = {2, 9, 11, 8};
    int key = 9;
    search_e(arr, key, 4);
    insertion_a(arr, 6, 4);
    
}