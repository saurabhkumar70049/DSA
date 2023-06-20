#include<bits/stdc++.h>
using namespace std;

// bool checkAnagram(string str1, string str2) {   //time complexity = )(n^2)
//     if(str1.length() != str2.length()){
//         return false;
//     }

//     for(int i = 0; i < str1.length(); i++) {
//         bool res = false;
//         for(int j = 0; j < str2.length(); j++) {
//             if(str1[i] == str2[j]) {
//                 res = true;
//                 str2[j] = '0';
//             }
//         }
//         if(res == false) {
//             return false;
//         }
//     }
//     return true;
// }

// bool checkAnagram(string str1, string str2) {  //time complexity = O(nlogn)
//     if(str1.length() != str2.length()) {
//         return false;
//     }
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
//     return (str1 == str2);
// }


bool checkAnagram(string str1, string str2) {
    if(str1.length() != str2.length()) {
        return false;
    }

    int arr[256] = {0}; // this array have size 256 because ascii have 256 character
    for(int i = 0; i < str1.length(); i++) {
        arr[str1[i]]++;
        arr[str2[i]]--;
    }

    for(int i=0; i < 256; i++) {
        if(arr[i] != 0) {
            return false;
        }
    }
    return true;

}

int main() {
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    cout << checkAnagram(str1, str2);
}