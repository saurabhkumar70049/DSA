#include<bits/stdc++.h>
using namespace std;

void lomudoPartision(vector<int> &vec){
    int j = 0, i = j-1, p = vec.size()-1;
    while(j < p) {
        if(vec[p] >= vec[j]){
            i++;
            swap(vec[j], vec[i]);
        }
        j++;
    }
    swap(vec[p], vec[i+1]);
}

int main(){
    vector<int> vec = {12, 7, 8, 2, 17, 9};
    lomudoPartision(vec);
    for(int i : vec){
        cout << i << " ";
    }
}