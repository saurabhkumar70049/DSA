#include<bits/stdc++.h>
using namespace std;

int callFactorial(int arr[], int arrSize, int y){
    int calNum = 0, carry = 0;
    for(int i = 0; i < arrSize; i++) {
        calNum = arr[i]*y + carry;
        arr[i] = calNum%10;
        carry = calNum/10;
    }
    while(carry) {
        arr[arrSize] = carry%10;
        carry /= 10;
        arrSize++;
    }
    return arrSize;
}

void factorial(int x, int arr[]) {
    arr[0] = 1;
    int arrSize = 1;
    for (int i = 2; i <= x; i++) {
        arrSize = callFactorial(arr, arrSize, i);
    }
    for(int i = arrSize-1; i >= 0; i--) {
        cout << arr[i];
    }


}

int main() {
    int arr[500];
    cout << "enter number : " << endl;
    int x;
    cin >> x;
    factorial(x, arr);
}