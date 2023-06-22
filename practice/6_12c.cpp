#include<bits/stdc++.h>
using namespace std;

string tripletSum(vector<int> &vec, int sum) {
    int first = 0, last = vec.size()-1;
    while(first <= last) {
        int secondSum = vec[first]+vec[last];
        if(secondSum <= sum) {
            for(int i = first+1; i < last; i++) {
                if(secondSum+vec[i] == sum) {
                    cout << first << " " << i << " " << last <<endl;
                    return "yes";
                }
                else if(secondSum+vec[i] > sum) {
                    break;
                }
            }
            first++;
        }
        else {
            last--;
        }
    }
    return "no";

}

int main() {
    vector<int> vec = {3, 8, 12, 17, 20, 29};
    int sum;
    cin >> sum;
    cout << tripletSum(vec, sum);
}