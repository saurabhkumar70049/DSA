#include <bits/stdc++.h>
using namespace std;



int main() {
    vector <int> v1;
    for (int i = 1; i < 11; i++) {
        v1.push_back(i);
    }
    for (int i = 0; i < 10; i++) {
        cout << v1[i] << " ";
    }
    for (auto i = v1.begin(); i != v1.end(); i++) {
        cout << *i << " ";
    }
    cout << endl << v1.size() << endl << v1.capacity() << endl << v1.max_size()<< endl;

    v1.resize(9);

    cout << v1.size() << endl;

    for (auto i = v1.begin(); i != v1.end(); i++) {
        cout << *i << " ";
    }

    cout << endl << v1.empty() << endl;
    cout << v1.at(5) << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;

   
    cout << v1.at(3) << endl;

    v1.insert(v1.begin()+5, 50);
    cout << v1.at(5) << endl;
    v1.erase(v1.begin()+5);
    cout << v1.at(5)<< endl;

    vector<int> v2;
    int a[] = { 1, 2, 3 };
 
    // assign first 2 values
    v2.assign(a, a + 2);
 
    cout << "Elements of vector1 are\n";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
}