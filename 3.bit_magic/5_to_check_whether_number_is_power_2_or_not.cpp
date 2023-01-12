#include <bits/stdc++.h>
using namespace std;

/*bool power(int n) {
    if (n == 0) {
        return false;
    }
    //cout << ceil(log2(n)) << " " << floor(log2(n)) << endl;   // ceil take uper value and floor takes lower value ex. ceil(3.9) = 4; floor(3.9) = 3; ceil(3.1) = 4; floor(3.1) = 3
    return (ceil(log2(n)) == floor(log2(n)));
}*/

/*bool power(int n) {
    // if (n == 0) {
    //     return false;
    // }
    // int count = 0;
    // while(n > 0) {
    //     n = (n & (n-1));
    //     count++;
    // }
    // if (count == 1){
    //     return true;
    // }
    // else {
    //     return false;
    // }
    return (n != 0) && ((n & (n-1)) == 0);
}*/

bool power(int n) {
    if (n == 0) {
        return 0;
    }
    if ((n & (~(n-1)))== n) {    //remember
        return 1;
    }
    return 0;
}

int main() {
    cout << "Enter number : " ;
    int n;
    cin >> n ;
    // if (power(n)){
    //     cout << "YES" ;
    // }
    // else {
    //     cout << "NO";
    // }
    power(n) ? cout << "YES": cout << "NO";
}