#include <bits/stdc++.h>
using namespace std;

int sub_sum(int arr[], int sum, int n) {
    

    if (n == 0) {
        if (sum == 0) {
            return 1;
        }
        return 0;
    }
    return sub_sum(arr, sum - arr[n-1], n - 1) + sub_sum(arr, sum, n - 1);
}

int main() {
    int n = 4;
    int arr[n] = {10, 20, 15, 25};
    int sum = 30;
    cout << sub_sum(arr, sum, n);
}