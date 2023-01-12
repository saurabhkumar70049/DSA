#include <bits/stdc++.h>
using namespace std;

/*int count(int x) {  time complexity = O(log(x))
    int c = 0;
    
    // for (int i = 1; i <= (floor(log2(x))+1); i++) {
        
    //     if ((x & (1 << (i-1))) != 0) {
    //         c++;
    //     }
    // }            
    while (x) {
        c += x & 1;
        x >>= 1;
    }
    return c;
}*/

/*int count (int x) {
    if (x == 0) {
        return 0;
    }
    return (x & 1) + count(x >> 1);
}*/
// Brian Kernighan’s Algorithm -- if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit
// In this method we elemenet one set bit in one process
//  if we do AND operation between N and N - 1 then resultant value have 1 less set bit than n 

/*int count (int x) {
    int c = 0;
    while(x) {
        c++;
        x = (x & (x-1));
    }
    return c;
}*/

/*int count (int x) {  // time complexity = O(logn)
    if (x == 0) {   
        return 0;
    }

    return 1 + count((x & (x - 1)));
}*/


// lockup table -- In lockup table, we take input as index value and Set the output at index
int table[256];  // time complexity = O(1);

void initialize() {
    table[0] = 0;
    for (int i = 1; i < 256; i++) {
        table[i] = (i & 1) + table[i/2];  //0   1   1    2   1   2   2   3   1   2   2   3   2   3   3   4   1
                                          //0   1   2   3   4    5   6   7   8   9   10  11  12  13  14  15  16 
    }

    
}
int count(int x) {
    return (table[x & 0xff] + table[(x >> 8) & 0xff] + table[(x >> 16) & 0xff] + table[x >> 24]);  // here, we dial with 8 bit because our array size is 256 So, we need to sift number by multiple of 8
}

int main() {
    initialize();
    cout << "Enter integer : " ;
    int x;
    cin >> x;

    cout << count(x);
}