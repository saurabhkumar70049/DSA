#include<bits/stdc++.h>
using namespace std;
/*int factorial(int x) {
    int fact = 1;
    while (x > 1) {
        fact = fact*x;
        x--;
    }
    return fact;
}*/

int factorial(int x) {
    if (x == 1 || x == 0) {
        return 1;
    }
    return x*factorial((x-1));
}
int main() {
    int x;
    cout << "Enter number : ";
    cin >> x;
    int y = factorial(x);
    cout << "factorial of number : " << y;
}