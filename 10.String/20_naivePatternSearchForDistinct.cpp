//In this question, Pattern character must be different so, using this information we make this pattern search as linear problem 
//ex = str : abcfabcd
//     ptr : abcd
//o/p      : 4
//      a   b   c   f   a   b   c   d
//      a   b   c   d
//                  *
//      this all privious element are equal to some element and all are different so we can skip these element 

#include<bits/stdc++.h>
using namespace std;

void patternSearch(string str, string pat){ //time complexity = O(n)
    cout << str << " " << pat;
    for(int i = 0; i < (str.length()-pat.length()+1); ) {

        cout << i << endl;
        int j = 0;
        while(pat[j] == str[j+i] && j < pat.length()){
            j++;
        }
        if(j == pat.length()) {
            cout << "start index : " << i << endl;
        }


        if(j == 0) {
            i = i+1;
        }
        else {
            i = i+j;                
        }
    }
    
}

int main() {
    string str;
    getline(cin, str);
    string pat; // it must have distinct character
    getline(cin, pat);
    patternSearch(str, pat);
}