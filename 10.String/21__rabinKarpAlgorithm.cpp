#include<bits/stdc++.h>
using namespace std;

void patternMatch(string text, string pat){
    int n1 = text.length(), n2 = pat.length();

    int t = 0, p = 0;
    for(int i = 0; i < n2; i++) {
        p += pow(pat[i], n2-i);
        t += pow(text[i], n2-i);
    }
    cout << p << " " << t;

    for(int i = 0)


}

int main() {
    string text;
    getline(cin, text);
    string pat;
    getline(cin, pat);
    patternMatch(text, pat);
}