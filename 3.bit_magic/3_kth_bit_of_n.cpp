#include <bits/stdc++.h>
using namespace std;

/*void kth_bit(int n, int k) { // this is right shift method
    n = n >> (k-1);
    
    if (n%2 == 0) {    // this think also done with other method, if n & 1 is non zero then set, otherwise not set
        cout << "NOT SET";
    }
    else {
        cout << "Set";
    }
}*/

void kth_bit(int n, int k) {  // this is left shift method
    n = (1 << (k-1)) & n;
    
    if (n != 0) {
        cout << "SET";
    }
    else {
        cout << "NOT SET";
    }

}

int main() {
    cout << "Enter n and k respectively  :  " ;
    int n, k;
    cin >> n >> k;
    kth_bit(n, k);
}