// Maximise number of cuts in a rope if it can be cut only in given 3 sizes
// Given a rope of length N meters, and the rope can be cut in only 3 sizes A, B and C. 
// The task is to maximizes the number of cuts in rope. If it is impossible to make cut then print -1.

#include<bits/stdc++.h>
using namespace std;

int rope(int n, int a, int b, int c) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -1;
    }

    int res = max(rope(n-a, a, b, c), max(rope(n-b, a, b, c), rope(n-c, a, b, c)));  // max take only two input that's why i use two max

    if (res == -1) {
        return -1;
    }
    return res + 1;
}

int main() {
    cout << "Enter n, a, b, c : " ;
    int n, a, b, c ;
    cin >> n >> a >> b >> c;
    cout << " rope can be cut into : "<< rope(n, a, b, c) << "pieses";
}


// this question can be solve easily using dynamic programming 