#include<bits/stdc++.h>
using namespace std;

#define d 256

int q = 101;


void patternMatch(string text, string pat){
    int n1 = text.length(), n2 = pat.length();

    int h = 1;
    for(int i = 1; i < n2; i++){
        h= (h* d) %q;
    }

    int t = 0, p = 0;
    for(int i = 0; i < n2; i++) {
        p = (p*d + pat[i])%q;
        t = (t*d + text[i]) % q;
    }

    for(int i = 0; i <= n1-n2; i++){
        if(p == t){
            bool flag = true;
            for(int j = 0; j < n2; j++) {
                if(text[i+j] != pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                cout << i << endl;
            }
        }

        if(i < (n1-n2)){
            t = (d*(t - text[i]*h)+text[i+n2])%q;
        }
        if(t < 0) {
            t = t+q;
        }
    }



}

int main() {
    string text;
    getline(cin, text);
    string pat;
    getline(cin, pat);
    patternMatch(text, pat);
}