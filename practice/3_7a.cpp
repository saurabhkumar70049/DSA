#include<bits/stdc++.h>
using namespace std;

void oddTimeNumber(int arr[], int n){
    int temp = 0;
    for (int i = 0; i < n; i++){
        temp = temp^arr[i];
    }
    cout << temp << endl;
    int x=0, y=0;
    int rightMostBit = temp & (-temp);
    for(int i = 0; i < n; i++){
        if (rightMostBit & arr[i]){
            x ^= arr[i];
        }
        else {
            y ^= arr[i];
        }
    }
    cout <<endl << "number : " << x << y;


}

int main() {
    int arr[] = {2, 3, 4, 5, 2, 3, 4, 5, 3, 5};
    oddTimeNumber(arr, sizeof(arr)/sizeof(arr[0]));
}