#include <bits/stdc++.h>
using namespace std;

// int pali(int n, int temp) {
//     if (n == 0) {
//         return temp;
//     }
//     temp = 10*temp + (n % 10);
//     pali (n/10, temp);
// }

bool pali (string s, int n, int i) {
    if (n <= i) {
        return true;
    }

    return ((s[n] == s[i]) && pali(s, n-1, i+1));

}

// bool pali(string s, int n, int i) {
//     if (n >= i) {
//         return true;
//     }
//     bool str = str && ((s[n-1] == s[i]) ? pali(s, n-1, i+1) : false); // alway remainber that this equation is not correct because we are not returning to the main function
//     return str;
// } 


int main() {
    cout << "Enter number : " ;
    string s;
    cin >> s;
    int n = s.length();
    if (pali(s, n-1, 0))
        cout << "YES";
    else {
        cout << "NO";
    }
}