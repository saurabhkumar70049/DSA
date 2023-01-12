#include<bits/stdc++.h>
using namespace std;
/*bool palindrome(int x) {   //1st method
    int r, n = 0;
    int m = x;
    while (x > 0) {
        r = x%10;
        n =  n*10 + r;
        x /= 10;
    }
    return m == n ;
    //if (m == n) {
    //    return true;
    //}
    //else {
    //    return false;
    //}
}*/
// When the number of digits of that number exceeds 10^18, 
//we can’t take that number as an integer since the range of long long int doesn’t satisfy the given number.
//So take input as a string
/*bool palindrome(int x) {    // 2nd method
    string str = to_string(x);   // to change int to str
    int n = str.length();

    for (int i = 0; i < (n/2); i++) {
        if (str[i] != str[n-i-1]) {
            return false;
        }
    }
    return true;

}*/

bool palindrome(int x) {   // 3rd method
    string str = to_string(x);
    string str1 = str;
    reverse(str1.begin(), str1.end());
    return (str == str1) ? true : false;
}


int main() {
    cout << "enter number : ";
    int x;
    cin >> x;
    bool s = palindrome(x);
    cout << "this number is palindrome : " << s ;
}