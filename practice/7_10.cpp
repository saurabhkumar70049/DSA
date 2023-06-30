#include<bits/stdc++.h>
using namespace std;

int mergeFunction(vector<int> &vec, int low, int mid, int high){
    int count = 0;
    int n1 = mid-low+1;
    int n2 = high - mid;
    vector<int> vec1(n1);
    vector<int> vec2(n2);
    int i = 0;
    while(i < n1){
        vec1[i] = (vec[i+low]);
        i++;
    }
    i = 0;
    while(i < n2){
        vec2[i] = (vec[i+mid+1]);
        i++;
    }
    int i1 = 0, i2 = 0, index = low;
    while(i1 < n1 && i2 < n2){
        if(vec1[i1] > vec2[i2]){
            vec[index] = vec2[i2];
            count += n1-i1;
            i2++;
        }
        else {
            vec[index] = vec1[i1];
            i1++;
        }
        index++;
    }
    while(i1 < n1){
        vec[index] = vec1[i1];
        i1++;
        index++;
    }
    while(i2 < n2){
        vec[index] = vec2[i2];
        i2++;
        index++;
    }
    return count;
}

int divideFunction(vector<int> &vec, int low,int high){
    int count = 0;
    if(low < high){
        
        int mid = low + (high-low)/2;
        count += divideFunction(vec, low, mid);
        
        count += divideFunction(vec, mid+1, high);
        // cout << "hello" <<endl;
        count += mergeFunction(vec, low, mid, high);

    }
    return count;
}


int main() {
    vector<int> vec = {2, 4, 1, 3};
    cout << divideFunction(vec, 0, 3);
    
}