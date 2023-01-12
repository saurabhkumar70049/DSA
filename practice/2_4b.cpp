#include <bits/stdc++.h>
using namespace std;


int cal(int arr[], int size_of_arr, int i) {
    int carry = 0, mult;
    for (int j = 0; j < size_of_arr; j++) {
        mult = i*arr[j] + carry;
        arr[j] = mult%10;
        carry = mult/10;
    }

    while (carry != 0) {
        arr[size_of_arr] = carry%10;
        carry /= 10;
        size_of_arr++;
    }
    return size_of_arr;

}

void fact (int x) {
    int arr[500];
    int size_of_arr = 1;
    
    for (int i = 2; i <= x; i++) {
        size_of_arr = cal(arr, size_of_arr, i);
    }

    for (int k = size_of_arr - 1; k >=0; k--) {
        cout << arr[k];
    }
    
}

int main() {
    int x; 
    cin >> x;
    fact(x);
}