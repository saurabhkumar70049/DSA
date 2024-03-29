#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[], int n, int item) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(item > arr[i]) {
            count++;
        }
    }
    return count;
}

void cycleSort(int arr[], int n) {
    int i = 0;
    while(i < n) {
        int index = minElement(arr, n, arr[i]);
        if(i == index) {
            i++;
            continue;
        }
        while((arr[index] == arr[i]) && index < n) {
            index++;
        }
        
        swap(arr[i], arr[index]);
        i++;
    }
}

int main() {
    int arr[] = {20, 2, 7, 27, 2};
    cycleSort(arr, 5);
    for(int i : arr) {
        cout << i << " ";
    }
}