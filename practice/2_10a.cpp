#include<bits/stdc++.h>
using namespace std;

int power(int m, int n) {
    if (n == 0) {
        return 1;
    }
    int temp = power(m, n/2);
    if (n%2 == 0) {
        return temp*temp;
    }
    else {
        return m*temp*temp;
    }
}

int main() {
    int m, n;
    cout << "Enter M^n : ";
    cin >> m >> n;
    cout << power(m, n) ;
}