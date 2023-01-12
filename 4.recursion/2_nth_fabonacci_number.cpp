// The Fibonacci numbers are the numbers in the following integer sequence.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..


#include <bits/stdc++.h>
using namespace std;

// void fabo(int n) {       //here i print fabonacci series and I take n as a number till need to print fabonacci series
//     int f1 = 0, f2 = 1, f3 = 0;
//     while (f1 <= n) {
       
//         f3 = f1 + f2;
//         cout << f1 << " ";
//         f1 = f2;
//         f2 = f3;

//     }
// }

// void fabo(int n) {    // Here i take n as index and print nth fabonacci series
//     int f1 = 0, f2 = 1, f3 = 0;
//     if (n == 0) {
//         cout << f1 << endl;
//         return;
//     }
//     if (n == 1) {
//         cout << f2 << endl;
//         return;
//     }
//     for (int i = 0; i <= n - 2; i ++) {
//         f3 = f1 + f2;
//         f1 = f2;
//         f2 = f3;
//     }
//     cout << f3 << endl;
// }

// int fabo (int n) {
//     if (n <= 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     return fabo(n-1) + fabo (n-2);
// }

// int fabo (int n) {
//     int arr[n + 1];
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i <= n; i++) {
//         arr[i] = arr[i-2] + arr[i-1];
//     }
//     return arr[n];
// }

// In this method we directly implement the formula for nth term in the fibonacci series. 
// Fn = {[(√5 + 1)/2] ^ n} / √5 
//Using approximation equation is good enough here, since we know N >= 0 && N <= 30
int fabo(int n) {
    double phi = (sqrt(5) + 1) / 2;    
    return round(pow(phi, n) / sqrt(5));
}

int main() {
    cout << "Enter n : " ;
    int n;
    cin >> n;
    cout << fabo(n);
}