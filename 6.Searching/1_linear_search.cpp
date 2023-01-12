#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int key){
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2,9,3,7,1};
    cout << "Enter key: " ;
    int key;
    cin >> key;
    cout << "index of key :" << linear_search(arr, 5, key);
}