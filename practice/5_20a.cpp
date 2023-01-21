#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {
    int temp = arr[0], count = 1;
    for (int i = 1; i < n; i++) {
        if(arr[i] == temp) {
            count++;
        }
        else {
            count--;
        }

        if(count == 0) {
            temp = arr[i];
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if(temp == arr[i]) {
            count++;
        }
    }
    return (count > n/2) ? temp : -1;
}

int main() {
    int arr[] = {2,2,3,3,3};
    cout << majorityElement(arr, 5);
}