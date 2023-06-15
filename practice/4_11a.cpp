#include<bits/stdc++.h>
using namespace std;

int subsetSum(int arr[], int n, int sum, int i) {
    if(n == i) {
        if(sum == 0) {
            cout << "yes"<<endl;
            return 1;
        }
        return 0;
    }
    return subsetSum(arr, n, sum-arr[i], i+1) + subsetSum(arr, n, sum, i+1);

}

int main() {
    int arr[] = {10, 15, 20};
    int sum = 25;
    cout << subsetSum(arr, 3, sum, 0);
}