#include<bits/stdc++.h>
using namespace std;

/*void prime(int x) {
    int i = 2;
    cout << "prime factor : " ;
    while (x > 1) {
        if (x%i == 0) {
            cout << i << " ";
            x = x/i;
        }
        else {
            i++;
        }
    } 
}*/

void prime(int n) 
{ 
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        printf("%d ", 2); 
        n = n/2; 
    } 
     
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (n%i == 0) 
        { 
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
     
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) 
        printf ("%d ", n); 
} 

int main() {
    cout << "Enter the number : " ;
    int x;
    cin >> x;
    prime(x);
}