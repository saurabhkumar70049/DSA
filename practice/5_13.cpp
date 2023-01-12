#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1]){
            count++;
        }
        else {
            cout << arr[i] << " : " << count <<endl;
            count = 1;
        }
    }
}

int main() {
    int arr[] = {10, 10, 10, 20, 20, 30};
    frequency(arr, 6);
}