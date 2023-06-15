#include<bits/stdc++.h> 
using namespace std;

int maxCutting (int n, int a, int b, int c){
    if(n == 0) {
        return 0;
    }
    else if(n < 0) {
        return -1;
    }
    int res = max(maxCutting(n-a, a, b, c), max(maxCutting(n-b, a, b, c), maxCutting(n-c, a, b, c)));
    if(res == -1) {
        return -1;
    }
    return res+1;
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << maxCutting(n, a, b, c);
}