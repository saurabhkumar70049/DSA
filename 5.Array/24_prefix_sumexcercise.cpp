//how to answer the below weighted sum quiries efficiently
// arr = [2, 3, 5, 4, 6, 1]
// getwsum(0, 2) = 23
//                  [1*arr[0]+2*arr[1]+3*arr[2]] = 1*2 + 2*3 + 3*5 = 23


// [1*arr[0] + 2*arr[1] ....... r-l+1arr[r]]

//(i-l+1)*arr[i] where i goes from l to r
// = i*arr[i] - ((l-1)*arr[i])


#include <bits/stdc++.h>
using namespace std;

int n = 6;
int arr[6] = {2,3,5,4,6,1};



void initializion_array() {
    for (int i = 1; i < 6; i++) {
        arr[i] += arr[i-1];
    }
}
int sum_index(int arr1[], int i, int j) {
    int s = i-1;
    if (i == 0) {
        return arr1[j] - arr[j];
    }
    else {
        return (((arr1[j] - arr1[i -1])) - (s*(arr[j] - arr[i -1])));
    }
}

int main() {
    int arr1[n];
    arr1[0] = arr[0];
    for (int i = 1; i < n; i++) {
        arr1[i] = i*arr1[i] + arr1[i-1];
    }
    initializion_array();
    cout << "enter the index which is less than 6 : " ;
    int l, r;
    cin >> l >> r;
    cout << sum_index(arr1, l, r);
}