#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    int start = 0, end = 0;
    for(int i = 0; i <= str.length(); i++){

        if(i == str.length() || str[i] == ' '){
            if(start == end){
                continue;
            }
            while(start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i+1;
        }
        else {
            end = i;
        }
    }
    start = 0;
    end = str.length()-1;
    while(start < end){
        char temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start++;
        end--;
    }
    return str;
}

int main() {
    string str;
    getline(cin, str);
    cout <<"'" << reverseString(str) << "'";
}