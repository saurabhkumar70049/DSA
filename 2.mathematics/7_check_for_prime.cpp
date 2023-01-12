#include<bits/stdc++.h>
using namespace std;

bool prime(int x) {
    
    //for (int i = 2; i <= x/2; i++) {  this is also correct but sqrt is more efficient 
    for (int i = 2; i <= sqrt(x); i++) {
        if (x%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Enter number : " ;
    int x;
    cin >> x;
    prime(x) == 1 ? cout << "Yes" : cout << "No";
}