// all the elements which present in right side of element is smaller than that element then it is called leader element



#include<bits/stdc++.h>
using namespace std;

void leader(int arr[], int n) {
    int l = -1;
    for (int i = n-1; i >= 0; i--) {
        if (l < arr[i]) {
            l = arr[i];
            cout << l << " ";
        }
    }
}

int main() {
    int arr[] = {2, 20, 5, 3, 6, 1};
    leader(arr, 6);
}