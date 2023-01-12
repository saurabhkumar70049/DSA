/*  Factorial of a large number
    Factorial of 100 has 158 digits. It is not possible to store these many digits even 
    if we use long long int. 
    capacity of long long int 9,223,372,036,854,775,807
    the value of n whose factorial can be stored in the respective size.

    1. integer –> n<=12
    2. long long int –> n<=19

NOTE : whenever you see problem where data type is not able to store the value then just think about
       data structure like string, array, linked list
*/




#include<bits/stdc++.h>
using namespace std;

int val(int arr[], int arr_size, int i) {
    int carry = 0;
    for (int j = 0; j < arr_size; j++) {
        int s = arr[j]*i + carry;
        arr[j] = s%10;
        carry = s/10;
    }
    while (carry) {
        arr[arr_size] = carry%10;
        carry /= 10;
        arr_size++;
    }
    return arr_size;
}

void factorial(int x) {
    int arr[500];   // capacity of array to store factorial of 10^3
    arr[0] = 1;
    int arr_size = 1;
    for (int i = 2; i <= x; i++) {
        arr_size = val(arr, arr_size, i);
    }
    cout << "Factorial of number : " ;
    for (int k = arr_size-1; k >= 0; k--) {
        cout << arr[k];
    }
    delete[] arr;
}

int main() {
    cout << "Enter the number : " ;
    int x;
    cin >> x;
    factorial(x); // time complexity = O(n log n!)
    
}

//this question can be solve with the help of linked list, So will solve this  question after reading linked list