#include<bits/stdc++.h>
using namespace std;

int maxCut(int n, int a, int b, int c){
    if(n < 0){
        return -1;
    }
    if(n == 0){
        return 0;
    }
    int m = max(maxCut(n-a, a, b, c), max(maxCut(n-b, a, b, c), maxCut(n-c, a, b, c)));

    if(m == -1){
        return -1;
    }
    return m+1;
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << maxCut(n, a, b, c);
}