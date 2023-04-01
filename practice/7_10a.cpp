#include<bits/stdc++.h>
using namespace std;

int mergeArray(vector<int> &vec, int left, int mid, int right) {
    vector<int> vec1(vec.begin() + left, vec.begin() + mid+1);
    vector<int> vec2(vec.begin()+mid+1, vec.begin()+right+1);
    cout << "v1 : " ;
    for(int j : vec1) {
        cout << j << " ";
    }
    cout << endl;
    cout << "v2 : " ;
    for(int j : vec2) {
        cout << j << " ";
    }
    cout << endl;
    int count = 0;
    int i = 0, j = 0, index = left;
    while(i < vec1.size() && j < vec2.size()) {
        if(vec1[i] > vec2[j]) {
            count += vec1.size() - i;
            cout << count << endl;
            vec[index] = vec2[j];
            j++;
        }
        else {
            vec[index] = vec1[i];
            i++;
        }
        index++;
    }
    while(i < vec1.size()){
        vec[index] = vec1[i];
        i++;
        index++;
    }
    while(j < vec2.size()){
        vec[index] = vec2[j];
        j++;
        index++;
    }
  
    return count;
}

int mergeSort(vector<int> &vec, int left, int right) {
    int count = 0;
    if(left < right) {
        int mid = (left+right)/2;
        count += mergeSort(vec, left, mid);
        count += mergeSort(vec, mid+1, right);
        count += mergeArray(vec, left, mid, right);
    }
    return count;
}

int main() {
    vector<int> vec = {2,4,1,3};
    cout << mergeSort(vec, 0, vec.size()-1) <<endl;
    for(int i : vec) {
        cout << i << " ";
    }
}