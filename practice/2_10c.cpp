#include <bits/stdc++.h>
using namespace std;

// int calPower(int n, int m){
//     if (m == 0){
//         return 1;
//     }
//     if(m%2 == 1){
//         return n*(calPower(n, m/2)* calPower(n, m/2));
//     }
//     else {
//         return calPower(n, m/2) * calPower(n, m/2);
//     }
// }

int calPower(int n, int m){
    if (m == 0){
        return 1;
    }

    int rev = calPower(n, m/2);

    if (m%2 == 1){
        return rev*rev*n;
    }
    else {
        return rev*rev;
    }
}

int main() {
    int n, m;
    cout << "enter n^m : ";
    cin >> n >> m;
    cout << calPower(n, m) << endl;
}