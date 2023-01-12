#include <bits/stdc++.h>
using namespace std;

// int freq_number(int left[], int right[], int n) {
//     int freq[100] = {0};

//     for (int i = 0; i < n; i++) {
//         for (int j = left[i]; j <= right[i]; j++) {
//             freq[j] +=1;
//         }
//     }
//     int res = 0;
//     for(int i = 1; i < 100; i++) {
//         if (freq[i] > freq[res]) {
//             res = i;
//         }
//     }
//     return res;

    
// }

int freq_number(int left[], int right[], int n) {
    int s = *max_element(right, right+n);
    int freq[s+2] = {0};   // why i take +2 here because of this "freq[right[i]+1] += -1" condition, it goes upto s+2;
    for (int i = 0; i < n; i++) {
        freq[left[i]]++;
        freq[right[i]+1] += -1;
    }
    int res = 0;
    for (int i = 1; i < s+2; i++) {
        
        freq[i+1] += freq[i];   //prefix sum
        if (freq[res] < freq[i]){
            res = i;
        }
    }
    return res;
}


int main() {
    int left[4]= {1, 2, 5, 15};
    int right[4] = {5, 8, 7, 18};
    cout << freq_number(left, right, 4);
}