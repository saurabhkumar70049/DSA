#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int key) {
    int count = 1, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (mid >= sum) {
            continue;
        }
        else {
            sum = arr[i];
            count++;
            cout << count << " ";
        }
    }

    if (key >= count) {
        return true;
    }
    else {
        return false;
    }
}

int pageAllocation(int arr[], int n, int key) {
    int low = 0, high = 0;                      // time complexity = (O(n*log(high-low)))
    for (int i = 0; i < n; i++) {
        low = max(low, arr[i]);
        high += arr[i];
    }
   
    int res;
    while(low <= high) {
        int mid = (low + high)/2;

        if (isFeasible(mid, arr, n, key)){
            res = mid;
            high = mid-1;

        }
        else {
            low = mid+1;
        }
    }
    return res;
}

int main() {
    int arr[] = {10, 20, 10, 30};
    int key = 2;
    cout << "Maximum page allocated to a student : " << pageAllocation(arr, 4, key);
}