#include <bits/stdc++.h>
using namespace std;
int arr[6] = {7, 3, 9, 8, 2, 1};

// int sum_index(, int i, int j) {
//     int sum = 0;
//     for (int s = i; s <= j; s++) {
//         sum += arr[s];
//     }
//     return sum;
// }
void initializion_array() {
    for (int i = 1; i < 6; i++) {
        arr[i] += arr[i-1];
    }
}
int sum_index(int i, int j) {
    if (i == 0) {
        return arr[j];
    }
    else {
        return (arr[j] - arr[i -1]);
    }
}

int main() {
    initializion_array();
    cout << "enter the index which is less than 6 : " ;
    int i, j;
    cin >> i >> j;
    cout << sum_index(i, j);
}