#include <bits/stdc++.h>
using namespace std;

int find_s(int arr[], int n) {
    int largest = 0, s_largest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[largest] < arr[i]) {
            s_largest = largest;
            largest = i;
        }
        else if(arr[largest] != arr[i]) {
            if (s_largest == -1 || arr[s_largest] < arr[i]) {
                s_largest = i;
            }
        }
    }
    return s_largest;

}

int main() {
    int arr[5] = {13, 2, 9, 4, 10};
    cout << "Second largest element : " << find_s(arr, 5);
}