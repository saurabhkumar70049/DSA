#include<bits/stdc++.h>
using namespace std;

void bit(int x) {
    int a = log2(x);
    //cout << a << endl;
    int arr[a+1];
    int i = 0;
    while (x > 0) {
        
        arr[i] = x%2;
        x /= 2;
        i++;
        
    }
    for (int j = i-1; j >= 0; j--) {
        cout << arr[j];
    }
}

int main() {
    cout << "Enter number : " ;
    int x;

    cin >> x;
    cout << "bits : ";
    bit (x);
}