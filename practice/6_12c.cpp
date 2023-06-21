#include<bits/stdc++.h>
using namespace std;

int tripletSum(vector<int> &vec, int sum) {
    int first = 0, last = vec.size()-1;
    while(first <= last) {
        int secondSum = vec[first]+vec[last];
        if(secondSum <= sum) {
            
        }
        else {
            return -1;
        }
    }

}

int main() {
    vector<int> vec = {3, 8, 12, 17, 20, 29};
    int sum;
    cin >> sum;
    cout << tripletSum(vec, sum);
}