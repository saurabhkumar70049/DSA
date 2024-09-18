#include <bits/stdc++.h> 
using namespace std;
int arr[500];

int multiNumber(int arrSize, int i){   
    int mult = 0, rem = 0;
    for (int j = 0; j < arrSize; j++){
        mult = i*arr[j] + rem;
        arr[j] = mult%10;
        rem = mult/10;
    }

    while(rem > 0){
        arr[arrSize] = rem%10;
        arrSize++;
        rem /= 10;
    }
    return arrSize;
}

void factorialcal(int x){
    arr[0] = 1;
    int arrSize = 1;
    for (int i = 2; i <= x; i++){
        arrSize = multiNumber(arrSize, i);
    }


    for (int i = arrSize - 1; i >= 0; i--){
        cout<< arr[i];
    }
}

int main() {
    cout << "enter number: "<<endl;
    int x;
    cin >> x; 
    factorialcal(x);
}