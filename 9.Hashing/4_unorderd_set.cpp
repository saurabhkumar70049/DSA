#include<bits/stdc++.h>
using namespace std;



int main() {
    unordered_set<int> s;
    s.insert(10);
    s.insert(18);
    s.insert(30);
    s.insert(13);
    s.insert(19);
    s.insert(11);
    cout << s.size() <<endl;
    s.insert(10);
    cout << s.size() << endl;
    for(auto i : s) {
        cout << i << " ";
    }
    cout << endl;
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
    
}