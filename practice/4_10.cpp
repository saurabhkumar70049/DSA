#include<bits/stdc++.h> 
using namespace std;

void towerOfHanoi(int n, char A, char B, char C){
    if(n == 1){
        cout << "Move "<< A <<" to " << C << " " << n << endl;
        return;
    }
    towerOfHanoi(n-1, A, C, B);
    cout << "Move "<< A <<  " to " << C << " " << n << endl; 
    towerOfHanoi(n-1, B, A, C);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
}