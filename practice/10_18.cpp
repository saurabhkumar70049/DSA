#include<bits/stdc++.h>
using namespace std;

int countPtr(string str, string ptr){
    int count = 0;
    for(int i = 0; i < str.length()-ptr.length()+1; i++){
        int j = 0;
        while(str[i+j] == ptr[j] && j < ptr.length()){
            j++;
        }
        if(j == ptr.length()){
            count++;
        }
    }
    
    return count;
}

int main() {
    string str;
    getline(cin, str);
    string ptr;
    getline(cin, ptr);
    cout << countPtr(str, ptr);
}

