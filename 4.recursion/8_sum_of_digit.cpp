#include <bits/stdc++.h>
using namespace std;

int sum(int n, int r) {
    if (n == 0) {
        return r;
    }
    return (r + sum(n/10, n%10));

}

int main() {
    cout << "Enter n : " ;
    int n;
    cin >> n;
    cout << sum(n/10, n%10);
}