#include<bits/stdc++.h>
using namespace std;
/*int lcm(int a, int b) {                     // 1st method 
    int r = max(a, b);                      // time complexity = O(n)
    for (int i= r; i <= a*b; i++) {
        if (i%a == 0 && i%b == 0) {
            return i;
        }
    }

    return 0;
}*/
int gcd (int a, int b) {
    return a == 0 ? b : gcd(b%a, a);
}

/*
    LCM(a,b) = |a*b| / GCD(a,b)
*/

int lcm(int a, int b) {     //2nd method
    return (a/gcd(a,b))*b;  // time complexty = O(log(min(a,b)))    
}

int main() {
    cout << "LCM(a, b), Enter a and b : " ;
    int a, b;
    cin >> a >> b;
    cout << "LCM(a, b) is : " << lcm(a, b) ;
}