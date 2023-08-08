#include<bits/stdc++.h>
using namespace std;

// void swapFunction(string &str, int low, int high){
//     while(low < high){
//         int temp = str[low];
//         str[low] = str[high];
//         str[high] = temp;
//         low++;
//         high--;
//     }
// }

// void rotateFunction(string &str){
//     swapFunction(str, 1, str.length()-1);
//     swapFunction(str, 0, str.length()-1);
// }

// bool checkRotated(string str1, string str2){
//     for(int i = 0; i < str1.length(); i++){
//         if(str1 == str2){
//             return true;
//         }
//         else {
//             rotateFunction(str1);
//         }
//     }
//     return false;
// }

bool checkRotated(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int j = 0, i = 0;
    while(i < 2*str1.length()){
        if(j == str1.length()){
            return true;
        }
        if(str1[j] == str2[i%(str1.length())]){
            j++;
            i++;
        }
        else {
            j = 0;
            i++;
        }
    }
    cout << j <<endl;
    return (j == str1.length());
}


int main() {
    string str1;
    getline(cin , str1);
    string str2;
    getline(cin, str2);
    cout << checkRotated(str1, str2);
}