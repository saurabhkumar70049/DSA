#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "dist 1 move from " << A << " to " << C << endl;
        return;
    }
    hanoi(n-1, A, C, B);
    cout << "dist " << n << " move from " << A << " to " << C << endl;
    hanoi(n-1, B, A, C);
}

int main() {
    cout << "Enter number of disk : ";
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}