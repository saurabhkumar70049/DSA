#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n) {
    int max_s = arr[0];
    for (int i = 0; i < n; i++) {
        int sum = arr[i];
        for (int j = i+1; j < n+i; j++) {
            sum += (arr[j%n]);
            max_s = max(sum, max_s);


        }
    }
    return max_s;
}

int main() {
    int arr[] = {5, -2, 3, 4};
    cout << max_sum(arr, 4);
}