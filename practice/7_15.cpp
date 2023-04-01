#include<bits/stdc++.h>
using namespace std;

int partision(vector<int> &vec, int l, int r) {
    int pivot = vec[r];
    int i = l - 1;
    for(int j = l; j < r; j++) {
        if(vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i+1], vec[r]);
    return i+1;
}

int quickSort(vector<int> &vec, int k, int l, int r) {
    if(l <= r) {
        int p = partision(vec, l, r);
        cout << p <<endl;
        for(int k : vec) {
            cout << k << " ";
        }
        cout <<endl;
        if(p == k) {
            cout << "Yes" << endl;
            return vec[p];
        }
        else if(p < k){
            return quickSort(vec, k, p+1, r);
        }
        else {
            return quickSort(vec, k, l, p-1);
        }
    }
}

int main() {
    vector<int> vec = {5,9,19,1,3};
    int k = 3;
    cout << quickSort(vec, k, 0, vec.size()-1);
}