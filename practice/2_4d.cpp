#include<bits/stdc++.h>
using namespace std;
int arr[500];

int calculateFactorial(int i, int arrSize){
    int rem = 0;
    for(int j = 0; j < arrSize; j++) {
        int val = arr[j]*i + rem;
        rem = val/10;
        arr[j] = val%10;
    }
    while(rem != 0){
        arr[arrSize] = rem%10;
        rem /= 10;
        arrSize++;

    }
    
    return arrSize;
}

void factorialLargeNumber(int num) {
    arr[0] = 1;
    int arrSize = 1;
    for (int i = 2; i <= num; i++){
        arrSize = calculateFactorial(i, arrSize);
    }

    for(int i = arrSize-1; i >= 0; i--) {
        cout << arr[i] ;
    }
}

int main() {
    cout << "enter the number : " ;
    int x;
    cin >> x;
    factorialLargeNumber(x);
}