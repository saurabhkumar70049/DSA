#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c) {
    if(n == 1) {
        cout << "Disk 1 move from " << a << "to" << c <<endl;
        return ;
    }
    towerOfHanoi(n-1, a, c, b);
    cout << "Dist " << n << "move from " << a << "to" << c <<endl;
    towerOfHanoi(n-1, b, a, c);
}

int main() {
    cout << "there are three disk and 3 tower" <<endl;
    towerOfHanoi(3, 'A', 'B', 'C');
}