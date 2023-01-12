#include <bits/stdc++.h>
using namespace std;

// int square_root(int num) { // O(sqrt(n))
//     int i = 1;
//     while(i*i <= num){
//         i++;
//     }
//     return (i-1);
// }

int square_root(int num) {
    int f = 1, l = num;
    int ans = 0;
    while(f <= l) {
        int mid = (f + l)/2;
        int s = mid*mid;
        if (s == num) {
            return mid;
        }
        else if (s < num) {
            f = mid+1;
            ans = mid;
        } 
        else {
            l = mid - 1;
        }

    }
    return ans;
}

int main() {
    cout << "enter number : " ;
    int num;
    cin >> num;
    cout << "sqrt of number : " << square_root(num);
}