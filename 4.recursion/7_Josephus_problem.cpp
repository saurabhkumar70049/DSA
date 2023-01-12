// There are n people standing in a circle waiting to be exe]cuted. The counting out begins at some point
// in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of 
// people are skipped and the next person is executed. The elimination proceeds around the circle (which 
// is becoming smaller and smaller as the executed people are removed), until only the last person remains, 
// who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons 
// are skipped and kth person is killed in a circle. The task is to choose the place in the initial circle so 
// that you are the last one remaining and so survive.

#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k) {
    if (n == 1) {
        return 0;
    }
    return ((jos(n-1, k) + k)%n);
}


int main() {    // time complexity = O(n)
    cout << "Enter n and k respectively : " ;
    int n, k;
    cin >> n >> k;
    cout << jos(n, k) + 1 << endl; // here i add 1 because i consider circle started from 0
    
   
}