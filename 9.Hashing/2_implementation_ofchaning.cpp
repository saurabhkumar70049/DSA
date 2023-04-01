#include<bits/stdc++.h>
using namespace std;

class myHash {
    int bucket;
    list<int> *table;
    public:
    myHash(int b) {
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int a) {
        int i = a%bucket;
        table[i].push_back(a);
    }
    void del(int a) {
        int i = a%bucket;
        table[i].remove(a);
    }
    bool sea(int a) {
        int i = a%bucket;
        for(auto x : table[i]){
            if(x == a) {
                cout << i << " ";
                return true;
            }
        }
        return false;
    }

};

int main() {
    myHash m(7);
    m.insert(50);
    m.insert(21);
    m.insert(58);
    m.insert(17);
    m.insert(15);
    m.insert(49);
    m.insert(56);
    m.insert(25);

    cout << m.sea(15) << endl;
    cout << m.sea(60) << endl;

    m.del(15);
    cout << m.sea(15) << endl;

    cout << m.sea(25) << endl;




}
