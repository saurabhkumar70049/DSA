#include<bits/stdc++.h>
using namespace std;

void intersectionArray(int arr1[], int arr2[], int n1, int n2) {
    if(arr1[0] > arr2[n2-1] || arr2[0] > arr1[n1-1]) {
        cout << -1 << endl;
        return;
    }
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if(i > 0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
}

int main() {
    int arr1[] = {2, 3, 3, 7};
    int arr2[] = {3, 3, 7, 9};
    intersectionArray(arr1, arr2, 4, 4);
}