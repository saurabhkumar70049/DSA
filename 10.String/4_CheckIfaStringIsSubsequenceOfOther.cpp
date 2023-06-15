//Subsequence --> doesn't need contigues element 
//Substring --> does need contigues element


#include<bits/stdc++.h>
using namespace std;

// bool subsequence(string str1, string str2) {    //this solution have some boundation like string2 must be in sequence that string1 have
//     int j = 0, i = 0; 
//     for(i = 0; i < str1.length() && j < str2.length(); i++) {
//         if(str1[i] == str2[j]) {
//             j++;
//         }
//     }

//     return (str2.length() == j);
// }

bool subsequence(string str1, string str2, int n, string curr, int i) {
    if(n == i) {
        if(curr == str2) {
            // cout << "Yes it subsequence of str1" <<endl;
            return true;
        }
        return false;
    }
    return subsequence(str1, str2, n, curr+str1[i], i+1) || subsequence(str1, str2, n, curr, i+1);
}

int main() {
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    // cout << subsequence(str1, str2);
    cout << subsequence(str1, str2, str1.length(), "", 0);
}