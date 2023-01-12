// Program to find the Roots of Quadratic equation

#include <bits/stdc++.h>
using namespace std;

void root (int a, int b, int c) {
    int d = pow(b, 2) - (4*a*c);
    int r1, r2;
    if (d == 0) {
        r1 = (-b + sqrt(b*b - (4*a*c))) / 2*a;
        cout << "Quadratic Equation have one real root : ";
        cout << r1;
        return;
    }
    else if (d > 0) {
        r1 = (-b + sqrt(b*b - (4*a*c))) / 2*a;
        r1 = (-b - sqrt(b*b - (4*a*c))) / 2*a;
        cout << "Quadratic Equation have two real root : ";
        cout << r1 << " " << r2;
        return;
    }
    else {
        cout << -(double)b / (2 * a) << " + i" <<  sqrt(b*b - (4*a*c)) / (2 * a) << endl << -(double)b / (2 * a) << " - i" <<  sqrt(b*b - (4*a*c)) / (2 * a);
    }
}

int main() {
    int a, b, c;
    cout << "Enter a, b, c respectively : ";
    cin >> a >> b >> c;

    root(a, b, c);
}