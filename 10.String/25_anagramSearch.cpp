#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string txt, string pat){
    int patValue = 0, txtValue = 0;
    for(int i =0; i < pat.length(); i++){
        patValue += int(pat[i]);
        txtValue += int(txt[i]);
    }

    if(patValue == txtValue){
        return true;
    }

    for(int i = pat.length(); i < txt.length(); i++){
        txtValue = txtValue + int(txt[i]) - int(txt[i-pat.length()]);
        if(txtValue == patValue){
            return true;
        }
    }
    return false;
}

int main() {
    string txt;
    getline(cin, txt);
    string pat;
    getline(cin, pat);
    cout << checkAnagram(txt, pat) << endl;
}