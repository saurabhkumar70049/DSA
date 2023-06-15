#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n) {
    int left = 1, right = n/2;
    int ans = 0;
    while(left <= right) {
        int mid = (left+right)/2;
        if(mid*mid == n) {
            return mid;
        }
        else if(mid*mid < n) {
            ans = mid;
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "enter number : " <<endl;
    cin >> n;
    cout << squareRoot(n);
}