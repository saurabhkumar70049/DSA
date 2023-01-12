#include <bits/stdc++.h>
using namespace std;

int cal (int arr[], int sizelo, int i) {
    int carry = 0, st;
    for (int j = 0; j < sizelo; j++) {
        st = arr[j]*i + carry;
        carry = st/10;
        arr[j] = st%10;
    }
    while(carry) {
        arr[sizelo] = carry%10;
        carry = carry/10;
        sizelo++;
    }
    return sizelo;
}

void fact(int n) {
    int arr[500];
    arr[0] = 1;
    int sizelo = 1;
    for (int i = 2; i <= n; i++) {
        sizelo = cal(arr, sizelo, i);
    }

    for (int i = sizelo - 1; i >=0; i--) {
        cout << arr[i];
    }
}

int main() {
    cout << "ENTER :" ;
    int n;
    cin >> n;
    fact(n);

}