#include<bits/stdc++.h>
using namespace std;


int binarySearch1(vector<int> vec, int key){
    
    int low = 0, high = vec.size()-1;
    
    while(low <= high){
        int mid = (high+low)/2;
        if(vec[mid] <= key){
            if(mid == vec.size()-1){
                return 0;
            }
            else if(key < vec[mid+1]){
                return (vec.size()-mid-1);
            }
            else {
                low = mid+1;
            }
        }
        else {
            if(mid == 0){
                return vec.size();
            }
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int k;
    cin >> k;
    vector<int> sea;
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        sea.push_back(x);
    }
    sort(vec.begin(), vec.end());
    
    
    for(int i = 0; i < k; i++){
        
        cout << binarySearch1(vec, sea[i]) << " ";
    }
}