#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n) {
    int temp = 0, sum=arr[0];
    for (int i = 0; i < n; i++){
        temp = max((temp + arr[i]), arr[i]);
        sum = max(sum, temp);

    }
    return sum;
}


int main() {
    int arr[] = {-3, 8, -2, 4, -5, 6};
    cout << max_sum(arr, 6);
}