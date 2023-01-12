#include <bits/stdc++.h>
using namespace std;

int rope (int n, int a, int b, int c) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -1;
    }
    int m = max(rope(n-a, a, b, c), max(rope(n-b, a, b, c), rope(n-c, a, b, c)));
    if (m == -1) {
        return -1;
    }
    return 1 + m;
}

int main() {
    cout << "enter n, a, b, c : " ;
    int n, a, b, c;
    cin >> n >> a >> b >> c; 
    cout << rope(n, a, b, c);

}