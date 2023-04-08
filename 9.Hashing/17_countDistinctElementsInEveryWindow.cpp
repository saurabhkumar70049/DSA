#include<bits/stdc++.h>
using namespace std;

void distinctElement(vector<int> &vec, int windowSize) {
    unordered_set<int> s;
    
    for(int i = 0; i < vec.size()-windowSize+1; i++) {
        s.insert(vec.begin()+i, vec.begin()+windowSize+i);
        cout << s.size() << " ";
        s.erase(s.begin(), s.end());
    }

}

int main() {
    vector<int> vec = {10, 20, 20, 10, 30, 40, 10};
    int windowSize = 4;
    distinctElement(vec, windowSize);
}