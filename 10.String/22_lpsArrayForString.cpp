// In this question we need to find out what's the longest prefix and suffix of string which is same. Using this fact make a Array of longest length of suff and prefex same

// 


#include<bits/stdc++.h>
using namespace std;

// int longestArray(string str, int n){   // time complexity = O(n^3)
//     for(int len = n-1; len > 0; len--){
//         bool flag = true;
//         for(int i = 0; i < len; i++){
//             if(str[i] != str[n-len+i]){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag == true){
//             return len;
//         }
//     }
//     return 0;
// }

// void lpsLongestPreSuff(string str){
//     vector<int> vec;
//     for(int i = 0; i < str.length(); i++) {
//         vec.push_back(longestArray(str, i+1));
//     }
//     for(int i : vec){
//         cout << i << " ";
//     }
    
// }


void lpsLongestPreSuff(string str){ //time complexity = O(n)
    vector<int> vec;
    vec.push_back(0);
    int i = 1, length = 0;
   
    while(i < str.length()){
        if(str[i] == str[length]){
            i++;
            length++;
            
            vec.push_back(length);
        }
        else {
            if(length == 0){
                vec.push_back(0);
                i++;
            }
            else{
                length = vec[length-1];
            }
        }
    }

    for(int i : vec){
        cout << i << " ";
    }

}

int main() {
    string str;
    getline(cin, str);
    lpsLongestPreSuff(str);
}