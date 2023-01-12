// Power Set: Power set P(S) of a set S is the set of all subsets of S. For example S = {a, b, c} 
//then P(s) = {{}, {a}, {b}, {c}, {a,b}, {a, c}, {b, c}, {a, b, c}}.
// If S has n elements in it then P(s) will have 2n elements

#include <bits/stdc++.h>
using namespace std;

void power_set(char set[], int n) {   // time complexity = O(n*2^n)
    int count = pow(2,n);
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < n; j++) {
            if ((i>>j) & 1) {
                cout << set[j] << " ";
            }
            
        }
        cout << endl;
    }

}

int main() {
    char set[] = {'A', 'B', 'C'};
    
    power_set(set, 3);
}