#include<bits/stdc++.h>
using namespace std;

// int power(int m, int n) {
//     if (n == 0) {
//         return 1;
//     }
//     if (n%2 == 0) {
//         return power(m, n/2)*power(m, n/2);
//     }
//     else {
//         return m*power(m, n/2)*power(m, n/2);
//     }
// }


float power(float m, int10 n) {
    if(n == 0) {
        return 1;
    }
    float temp = power(m, n/2);
    if (n%2 == 0) {
        return temp*temp;
    }
    else {
        if (n > 0)
            return m*temp*temp;
        else {
            return (temp*temp)/m;
        }
    }
}

int main() {
    cout << "M^n : enter m and n respectively ";
    float m;
    int n;
    cin >> m >> n;
    cout << power(m, n);
}