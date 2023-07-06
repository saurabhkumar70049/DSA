#include<bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

// int lexicographicalRank(string str){ // time complexity = O(n^2)
//     int n = str.length();
//     int rank = 0;
//     for(int i = 0; i < n-1; i++){
//         int smaller = 0;
//         for(int j = i+1; j < n; j++){
//             if(int(str[i]) > int(str[j])){
//                 smaller++;
//             }
//         }
//         cout << smaller << " " << n-i-1 <<endl;
//         rank += smaller*factorial(n-i-1);

//     }
//     return rank+1;
// }

int lexicographicalRank(string str){
    int n = str.length();
    int fact = factorial(n);

    int smallerChar[256] = {0};
    
    for(int i = 0; i < n; i++){
        smallerChar[str[i]]++;
    }

    for(int i = 1; i < 256; i++){
        smallerChar[i] += smallerChar[i-1];
    }

    int rank = 0;

    for(int i = 0; i < n-1; i++){
        // cout << smallerChar[str[i] - 1] << " " <<fact/(n-i) << endl;
        fact = fact/(n-i);
        rank += smallerChar[str[i] - 1] * fact;
        for(int j = str[i]; j < 256; j++){
            smallerChar[j]--;
        }
    }
    return rank + 1;

}

int main() {
    string str;
    getline(cin, str);
    cout << lexicographicalRank(str);
}