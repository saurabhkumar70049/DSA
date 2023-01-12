#include<bits/stdc++.h>
using namespace std;

/*int gcd(int a, int b) {
    int r = 1;
    int s = 0;
    while(r != 0) {
        s = a;
        r = b%a;
        b = a;
        a = r;
    }
    return s;
}*/
/*int gcd(int a, int b) {  //Time Complexity : O(min(a,b)) 
                        //Auxiliary Space: O(1)  or constant
    int r = min(a, b);
    while (r > 0) {
        if (a%r == 0 && b%r == 0) {
            return r;
        }
        r--;
    }
    return 0;

}*/
int gcd(int a, int b) {  //Time Complexity: O(log(min(a,b))
                           //Auxiliary Space: O(log(min(a,b))
    //int r = b%a;       //method called Euclidean algorithms
    //if (r == 0) {
    //    return a;
    //}
    return a == 0 ? b : gcd(b%a, a);
}

int  main() {
    cout << "GCD(a, b) \nEnter a and b : ";
    int a, b;
    cin >> a >> b;
    cout << "GCD(a, b) is : " << gcd(a,b) ;
}