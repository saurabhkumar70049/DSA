#include <bits/stdc++.h>
using namespace std;

int arr[256];

void inti() {
    for (int i = 0; i < 256; i++) {
        arr[i] = (i & 1) + arr[i/2];
    }
}

int num(int x) {
    return (arr[(x & 0xff)]);
}

int main() {
    inti();
    int x = 13;
    cout << num(x);

}