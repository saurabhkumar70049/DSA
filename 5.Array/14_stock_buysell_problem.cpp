// here we need to find out maximum number of profit if stock price given with respect to the day. Index are treat as day
// arr[] = {1, 5, 3, 8, 12}
//          b  s   b     s
// profit -   4       9       = 13


#include <bits/stdc++.h>
using namespace std;

int pro(int arr[], int n) {
    int j = -1,  s = 0;
    int profit = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[i+1]) {
           
            if (s == 0) {
                j = i;
                
            }
            s = 1;
        }
        if(s != 0) {   // else if condition only applicatble if "if" condition derminated
            
            if ((arr[i] > arr[i+1]) || (i == (n-1))) {
               
                profit += arr[i] - arr[j];
                s = 0;
            }

        }
    }
    return profit;
}

int main() {
    int arr[] = {1, 5, 3, 8, 12};
    cout << "PROFIT : " << pro(arr, 5);
}