#include<bits/stdc++.h>
using namespace std;

// float median(int arr1[], int arr2[], int n1, int n2) {
//     int s;
//     if ((n1+n2)%2 == 0) {
//         s = 1;
//     }
//     else {
//         s = 0;
//     }
//     int i = 0, j =0, min1=0, max1=0, count = 0, m = (n1+n2)/2 +1;
//     while((i+j) < (n1+n2)) {
//         if (count == m) {
//             break;
//         }
//         min1 = max1;
//         if (arr1[i] < arr2[j]){
            
//             max1 = arr1[i];
//             count++;
//             i++;
//         }
//         else {
//             max1 = arr2[j];
//             count++;
//             j++;
//         }

//     }
//     if (s == 1) {
//         return (float)(min1+max1)/2;
//     }
//     else {
//         return max1;
//     }
// }


// 


float median(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = n1;
    while(i <= j) {
        int i1 = (i+j)/2;
        int i2 = ((n1+n2+1)/2) - i1; // it is a formula to tell equiter point in arr2
        int min1 = (i1 == n1) ? INT_MAX : arr1[i1];
        int max1 = (i1 == 0) ? INT_MIN : arr1[i1-1];
        int min2 = (i2 == n2) ? INT_MAX : arr2[i2];
        int max2 = (i2 == 0) ? INT_MIN : arr2[i2-1];

        if ((min1 >= max2) && (min2 >= max1)) {
            if((n1+n2)%2 == 0) {
                return float(min(min1, min2)+max(max1, max2))/2;
            }
            else {
                return max(max1, max2);
            }
        }
        else if(min1 < max2) {
            i = i1+1;
        }
        else {
            j = i1 -1;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 6, 7, 9}; // arr1 must be smaller among both
    int arr2[] = {12,23,34,45,56,67,89};

    cout << median(arr1, arr2, 5, 7);
}