#include<bits/stdc++.h>
using namespace std;

// int maxGuestMeet(int a[], int d[], int n) {
//     int ans = 0;
//     for(int i = 0; i < n; i++) {
//         int count = 0;
//         for(int j = 0; j < n; j++) {
//             if (a[i] < d[j] && d[i] >= a[j]) {
//                 count++;
//             }
//         }
//         ans = max(ans, count);
//     }
//     return ans;
// }

// int maxGuestMeet(int a[], int d[], int n) { // this approach is not correct
//     pair<int, int> time[n];
//     for(int i = 0; i < n; i++) {
//         time[i].first = a[i];
//         time[i].second = d[i];
//     }
//     sort(time, time+n);
//     int count = 1, ans = count;
//     for(int i = 1; i < n; i++) {
//         if(time[i].first <= time[i-1].second) {
//             count++;
//             ans = max(count, ans);
//         }
//         else {
//             count = 1;
//         }
//     }
//     return ans;
// }

int maxGuestMeet(int a[], int d[], int n) {
    sort(a, a+n);
    sort(d, d+n);
    int i = 1, count = 1, ans = count, index = 0;
    while(i < n){
        if(a[i] <= d[index]) {
            count++;
            ans = max(count, ans);
            i++;
        }
        else {
            count--;
            index++;
        }
        
    }
    return ans;
}

int main() {
    int arrival[] = {800, 100, 600, 500, 650};
    int departure[] = {840, 200, 830, 540, 810};
    int n = sizeof(arrival)/sizeof(arrival[0]);
    cout << maxGuestMeet(arrival, departure, n);
}