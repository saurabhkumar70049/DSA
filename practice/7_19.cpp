#include<bits/stdc++.h>
using namespace std;

void sortThreeElement(vector<int> &vec) {
    int i = 0, j = 0, k = vec.size()-1;
    while(j <= k) {
        if(vec[j] == 0) {
            swap(vec[j], vec[i]);
            i++;
            j++;
        }
        else if(vec[j] == 1) {
            j++;
        }
        else {
            swap(vec[j], vec[k]);
            k--;
        }
    }
}

int main() {
    vector<int> vec = {0,1,2,1,1,0,0,2,2};
    sortThreeElement(vec);
    for(int i : vec) {
        cout << i << " ";
    }
}