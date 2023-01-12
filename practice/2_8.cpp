#include <bits/stdc++.h>
using namespace std;

void calprime(int a) {
    while(a%2 == 0) {
        cout << 2 << " ";
        a /= 2;
    }
    for (int i = 3; i <= sqrt(a) + 1; i += 2) {
        while(a%i == 0) {
            cout << i << " ";
            a /= i;
        }
    }
    if (a > 2) {
        cout << a;
    }
}

int main() {
    int a = 20;
    calprime(a);
}