#include<bits/stdc++.h>
using namespace std;

bool possibleSum(int arr[], int n, int sum) {
    int temp = 0, count = 0;
    for (int i = 0; i < n; i++) {
        temp += arr[i];
        while(temp > sum) {
            temp -= arr[count];
            count++;
        }
    
        if(temp == sum) {
            return true;
        }

    }
    return false;
}

int main() {
    int arr[] = {2,3,9,7,5};
    int sum = 16;
    cout << possibleSum(arr, 5, sum);
}