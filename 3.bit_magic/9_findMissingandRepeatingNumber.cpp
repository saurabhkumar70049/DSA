//important
/*
Repeat and Missing Number Array
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4
*/


#include<bits/stdc++.h>
using namespace std;


vector<int> repeatedNumber(const vector<int> &A) {
    vector<int> vec;
    int xor1 = 1^A[0];
    for(int i = 1; i < A.size(); i++){
        xor1 = (A[i]^(i+1))^xor1;
    }
    cout << xor1 <<endl;            //xor of repeating and missing number
    int rightBit = xor1 & (-xor1); // right bit of xor
    cout << rightBit <<endl;
    int x = 0, y = 0;
    for(int i =0; i < A.size(); i++){
        if(rightBit & A[i]){
            x = x^A[i];        
        }
        else {
            y = y^A[i];
        }
    }
    for(int i = 1; i <= A.size(); i++){
        if(rightBit & i){
            x = x^i;
        }
        else {
            y = y^i;
        }
    }

    auto it = find(A.begin(), A.end(), x);
    if(it != A.end()){
        vec.push_back(x);
        vec.push_back(y);
    }
    else {
        vec.push_back(y);
        vec.push_back(x);
    }

    
    return vec;
}

int main(){
    //Input:[3 1 2 5 3] 

    vector<int> vec = {3, 1, 2, 5, 3};
    vector<int> ans = repeatedNumber(vec);
    for(auto i : ans){
        cout << i << " ";
    }

}