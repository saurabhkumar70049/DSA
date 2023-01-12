#include<bits/stdc++.h>
using namespace std;

float median(int arr1[], int arr2[], int n1, int n2) {
    int s;
    if ((n1+n2)%2 == 0) {
        s = 1;
    }
    else {
        s = 0;
    }
    int i = 0, j =0, min1=0, max1=0, count = 0, m = (n1+n2)/2 +1;
    while((i+j) < (n1+n2)) {
        if (count == m) {
            break;
        }
        min1 = max1;
        if (arr1[i] < arr2[j]){
            
            max1 = arr1[i];
            count++;
            i++;
        }
        else {
            max1 = arr2[j];
            count++;
            j++;
        }

    }
    if (s == 1) {
        return (float)(min1+max1)/2;
    }
    else {
        return max1;
    }
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {1, 2, 3, 4, 5,6};

    cout << median(arr1, arr2, 5, 6);
}