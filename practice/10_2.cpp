#include<bits/stdc++.h>
using namespace std;

// int countSubString(string str){
//     if(str.length() == 1){
//         return 0;
//     }
//     int count = 0;
//     for(int i = 0; i < str.length() - 1; i++){
//         if(str[i] == '1'){
//             for(int j = i+1; j < str.length(); j++){
//                 if(str[j] == '1'){
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }

int countSubString(string str){
    int tempCount = 0, count = 0;
    for(int i = 0; i < str.length()-1; i++){
        if(str[i] == '1'){
            count += tempCount;
            tempCount++;
        }
    }
    count += tempCount;
    return count;
}

int main() {
    string binaryString;
    getline(cin, binaryString);
    cout << countSubString(binaryString);
}