#include<bits/stdc++.h>
using namespace std;

int arr[500]; 

int multiFuntion(int i, int sizeArr){
    int carry = 0; 
    for(int j = 0; j < sizeArr; j++){
        int multValue = arr[j]*i + carry;
        arr[j] = multValue%10;
        carry = multValue/10;
    }
    while(carry > 0){
        arr[sizeArr] = carry%10;
        carry /= 10;
        sizeArr++; 
    }
    return sizeArr;
}

void largeFactorial(int n){
    arr[0] = 1; 
    int sizeArr = 1; 
    for (int i = 2; i <= n; i++){
        sizeArr = multiFuntion(i, sizeArr);
    }

    for (int i = sizeArr-1; i >= 0; i--){
        cout << arr[i]; 
    }
}

int main() {
    int n; 
    cout << "Enter Number: ";
    cin >> n;
    largeFactorial(n); 
}