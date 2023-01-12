#include <bits/stdc++.h>
using namespace std;

int cal(int arr[], int arr_size, int i) {
    int s, carry = 0;
    for (int j = 0; j < arr_size; j++) {
        s = arr[j]*i + carry;
        arr[j] = s%10;
        carry = s/10;
    }
    while (carry != 0) {
        arr[arr_size] = carry%10;
        carry /= 10;
        arr_size++;
    }
    return arr_size;
}

void fact(int n) {
    int arr[500];
    int arr_size = 1;
    for (int i = 2; i <= n; i++) {
        
        arr_size = cal(arr, arr_size, i);

    }
    for (int i = arr_size - 1; i >= 0; i--) {
        cout << arr[i];
    }
}

int main() {
    int n = 9;
    fact(n);
}