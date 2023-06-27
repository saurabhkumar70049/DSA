

#include<bits/stdc++.h>
using namespace std;

int patternCount(string text, string str) {  //time Complexity = O((n*m+1)*m)
    int count = 0;
    for(int i = 0; i < text.length()-str.length()+1; i++) {
        int j = 0;
        while(str[j] == text[i+j] && j < str.length()) {
            j++;
        }
        if(j == str.length()) {
            cout <<"Starting Index : " << i << endl;
            count++;
        }
    }
    return count;
}

int main() {
    cout << "Enter Text : ";
    string text;
    getline(cin, text);
    cout << endl << "Enter Pattern : ";
    string str;
    getline(cin, str);
    cout << patternCount(text, str);

}