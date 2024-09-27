#include<bits/stdc++.h>
using namespace std;

void missingRepeatedNumber(int arr[], int n){
    int x = 1^arr[0];
    for(int i = 1; i < n; i++){
        x = (x^arr[i])^(i+1);
    }
    int rightMostBit = x&(-x);
    int z = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(rightMostBit&arr[i]){
            z = arr[i]^z; 
        }
        else {
            y = arr[i]^y;
        }
    }
    for(int i = 1; i <= n; i++){
        if(rightMostBit&i){
            z ^= i;
        }
        else {
            y ^= i;
        }
    }
    cout << z << " " << y; 

}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 5};
    missingRepeatedNumber(arr, sizeof(arr)/sizeof(arr[0]));
}