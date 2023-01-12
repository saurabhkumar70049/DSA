#include <bits/stdc++.h>
using namespace std;

int first_occurence(int arr[], int first, int last) {
    if(first > last) {
        return -1;
    }
    int mid = (first + last)/2;
    if (arr[mid] == 0) {
        return first_occurence(arr, mid+1, last);
    }
    else {
        if ((arr[mid -1] != 1) || (mid == 0)) {
            return mid;
        }
        return first_occurence(arr, first, mid-1);
    }
    return -1;
}

int main() {
    int arr[5] = {0,0,0,0,0};
    cout << "number of 1s in binary array : " ;
    (first_occurence(arr, 0, 5-1) == -1) ? cout << "0" : cout << 5 - first_occurence(arr, 0, 5-1);

}