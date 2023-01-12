#include <bits/stdc++.h>
using namespace std;

int rope_cutte(int n, int a, int b, int c) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -1;
    }

    int rest = max(max(rope_cutte(n-a, a, b, c), rope_cutte(n-b, a, b, c)), rope_cutte(n-c, a, b, c));
    if(rest < 0) {
        return rest;
    }
    else {
        return rest+1;
    }

}

int main() {
    cout << "Enter : ";
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << "Maximum cut : " << rope_cutte(n, a, b, c);
}