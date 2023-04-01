#include <bits/stdc++.h>
using namespace std;

// int maxPeopleMeet(vector<int> &arr, vector<int> &dep){
//     int count = 1; int maxCount = 1;
//     int n = arr.size(), i = 1, j = 0;
//     while(i < n && j < n) {
//         if (arr[i] < dep[j]) {
//             count++;
//             i++;
//         }
//         else {
//             count--;
//             j++;
//         }
//         if(count == 0) {
//             count = 1;
//             i++;
//         }
//         maxCount = max(count, maxCount);
//     }
//     return maxCount;
// }

int maxPeopleMeet(vector<int> &arr, vector<int> &dep) {
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int count = 1; int maxCount = 1;
    int n = arr.size(), i = 1, j = 0;
    while(i < n && j < n) {
        if (arr[i] <= dep[j]) {
            count++;
            i++;
        }
        else {
            count--;
            j++;
        }
        maxCount = max(count, maxCount);
    }
    return maxCount;


}

int main() {
    vector<int> arr = {900, 940, 1000, 1030, 1210};
    vector<int> dep = {930, 1040, 1020, 1100, 1240};
    cout << maxPeopleMeet(arr, dep) << endl;

}