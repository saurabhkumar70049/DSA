#include <bits/stdc++.h>
using namespace std;

void sieve(int n) {
    bool arr[n+1];
    memset(arr, true, sizeof(arr));
    for (int i = 2; i*i <= n; i++) {
        if (arr[i] == true) {
            for (int j = i*i; j <= n; j += i) {
                arr[j] = false;
            }
        }
    }
    for (int k = 2; k <= n; k++) {
        if (arr[k] == true) {
            cout << k << " ";
        }
    }
}

int main() {
    int n = 50;
    sieve(n);
}