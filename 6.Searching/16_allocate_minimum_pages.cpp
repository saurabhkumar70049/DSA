#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int a, int b) {
    int s = 0;
    for (int i = a; i <= b; i++) {
        s += arr[i];
    }
    return s;
}

int maxAllocation(int arr[], int n, int k) {
    if (k == 1) {
        return sum(arr, 0, n-1);
    }
    if(n == 1) {
        return arr[0];
    }
    int res = INT_MAX;
    for (int i = 1; i < n; i++) {
        res = min(res, max(maxAllocation(arr, i, k-1), sum(arr, i, n-1)));
        cout << res << " ";
    }
    return res;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int k;
    cout << "Number of student : ";
    cin >> k;
    cout << "maximum allocated page : " << maxAllocation(arr, 4, k);

}