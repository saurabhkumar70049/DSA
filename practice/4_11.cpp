#include<bits/stdc++.h>
using namespace std;

int cal(int arr[], int sum, int n) {
    if (n==0) {
        if (sum == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return cal(arr, sum - arr[n-1], n-1) + cal(arr, sum, n-1);
}

int main() {
    int arr[] = {10, 20, 30};
    int sum = 30;
    cout << cal(arr, sum, 3);
}