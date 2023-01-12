#include<bits/stdc++.h>
using namespace std;

/*int power(int x, int n) {   // 1st method
    int m = 1;                  // time complexity = O(n)
    if (n == 0) {
        return 1;
    }
    for (int i = 1; i <= n; i++) {
            m *=x;
    }
    return m;
}*/

/*
general example x = 2, n = 3
                                     ( 3  ) * 2
                                    /       \
                            2*(  1  )      2*(1)
                            /       \       /       \
                        0               0 0             0


*/
/*int power(int x, int n) {   // 2nd method 
    if (n == 0) {           //time complexity = O(n) but we can optimise this algo to O(logn)
        return 1;
    }
    else if (n%2 == 0) {
        return power(x, n/2)*power(x, n/2);
    }
    else {
        return x*power(x, n/2)*power(x, n/2);
    }
}*/

// int power(int x, int n) {       // 3rd method
//     if (n == 0) {               // time complexity = O(logn)
//         return 1;
//     }
//     int temp = power(x, n/2);    // here we take only one path that's why cost reduce divisibly
//     if (n%2==0) {
//         return temp*temp;
//     }
//     else {
//         return x*temp*temp;
//     }
// }

float power(float x, int n) {
    if (n == 0) {
        return 1;
    }
    float temp = power(x, n/2);
    if (n%2 == 0) {  // here, don't take n as float
        return temp*temp;
    }
    else {
        if (n > 0) {
            return x*temp*temp;
        }
        else {
            return (temp*temp) / x;
        }
    }
}



int main() {
    cout << "X^n \nEnter X and n : " ;
    float x;
    int n;
    cin >> x >> n;
    cout << "X^n : " << power(x, n); 
}