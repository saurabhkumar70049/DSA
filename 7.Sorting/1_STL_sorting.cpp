#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {40, 20, 90};
    sort(arr, arr+3);
    for(auto i : arr) {
        cout << i<< " ";
    }
    sort(arr, arr+3, greater<int>());
    for (auto i : arr) {
        cout << i << " ";
    }

}