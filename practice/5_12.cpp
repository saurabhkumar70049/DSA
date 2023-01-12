#include<bits/stdc++.h>
using namespace std;

int m_diff(int arr[], int n) {
    int res = 0, m = arr[0];
    for (int i = 1; i < n; i++) {
        res = max(res, (arr[i]-m));
        m = min(m, arr[i]);
    }
    return res;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << "maximum diff : " << m_diff(arr, 7);
}