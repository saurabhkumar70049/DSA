#include<bits/stdc++.h>
using namespace std;

void LPSarray(string pat, vector<int> &vec){
    vec[0] = 0;
    int i = 1, length = 0;
    while(i < pat.size()){
        if(pat[i] == pat[length]){
            length++;
            vec[i] = length;
            i++;
        }
        else {
            if(length == 0){
                vec[i] = length;
                i++;
            }
            else {
                length = vec[length-1];
            }
        }
    }
}

void KMPalgorithm(string txt, string pat){
    int t = txt.length(), p = pat.length();
    vector<int> vec(p);
    LPSarray(pat, vec);
    // for(int i : vec){
    //     cout << i << " ";
    // }
    int i = 0, j = 0;
    while((t-i) >= (p - j)){
        if(txt[i] == pat[j]){
            i++;
            j++;
            // cout << j << endl;
        }
        if(j == p){
            cout << "Match Found at Index : " << i-j << endl;
            j = vec[j-1];
        }
        else if(i < t && txt[i] != pat[j]) {
            if(j != 0){
                j = vec[j-1];
            }
            else {
                i++;
            }
        }
    }
    
}

int main(){
    string txt;
    getline(cin, txt);
    string pat;
    getline(cin, pat);
    KMPalgorithm(txt, pat);
}