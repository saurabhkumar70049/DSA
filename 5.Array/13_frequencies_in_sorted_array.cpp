// input - arr[] = {10, 10, 10, 20, 40, 40}
// output - 10 : 3
//          20 : 2
//          40 : 2




#include <bits/stdc++.h>
using namespace std;


void frequency(int arr[], int n) {
    int i = 0, count = 1;
    while (i < n) {
        if (arr[i] == arr[i+1]) {
            count++;
            i++;
        }
        else {
            cout << arr[i] << " : " << count << endl;
            count = 1;
            i++;
        }
    }
}

int main() {
    int arr[] = {10, 11, 12, 20, 40, 40};
    frequency(arr, 6);
}