#include <bits/stdc++.h>
using namespace std;

int powe(int a, int b) {
    int temp;
    if (b == 0) {
        return 1;
    }
    temp = powe(a, b/2);
    if (b%2 ==0) {
        return temp*temp;
    }
    else {
        return a*temp*temp;
    }
}

int main() {
    int a = 2, b = 8;
    cout << powe(a, b);
}