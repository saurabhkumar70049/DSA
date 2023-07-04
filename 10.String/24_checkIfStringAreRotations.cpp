/*
In this question, we have two string and we need to tell about "is both string equal in circular manner"
ex :- s1 = "abcd", s2 = "cdab"
o/p : yes(both are equal)
ex :- s1 = "frds", s2 = "rsdf"
o/p :- no(both are not equal)
*/


#include<bits/stdc++.h>
using namespace std;

// bool checkStringRotation(string str1, string str2){//time complexity = O(n^2)
//     for(int i = 0; i < str1.length(); i++){   
//         int temp = str1[0];
//         for(int j = 1; j < str1.length(); j++){
//             str1[j-1] = str1[j];
//         }
//         str1[str1.length()-1] = temp;
//         if(str1 == str2){
//             return true;
//         }
//     }
//     return false;
// }


bool checkStringRotation(string str1, string str2){ //time complexity = O(n)
    if(str2.length() != str1.length()){
        return false;
    }

    return ((str1+str1).find(str2) != string::npos);
}

int main() {
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    cout << checkStringRotation(str1, str2);

}