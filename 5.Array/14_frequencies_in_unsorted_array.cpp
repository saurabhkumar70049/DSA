#include<bits/stdc++.h>
using namespace std;

void frequencyElement(int arr[], int n) {
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
    for(auto i : m) {
        cout << i.first << " : " << i.second << endl;
    }
}

int main() {
    int arr[] = {8, 9, -1, 9, 9, 8};
    frequencyElement(arr, 6);
}