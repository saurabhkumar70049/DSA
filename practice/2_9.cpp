#include <bits/stdc++.h>
using namespace std;

void sieve(int a) {
    bool arr[a+1];
    memset(arr, true, sizeof(arr));
    for (int i = 2; i <= a; i ++) {
        if (arr[i] == true) {
            for (int j = i*i; j <= a; j += i) {
                arr[j] = false;
            }
        }
    }
    for (int k = 2; k <= a; k++) {
        if (arr[k] == true) {
            cout << k << " " ;
        }
     }
}

int main() {
    int a = 28;
    sieve(a);
}