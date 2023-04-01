#include <bits/stdc++.h>
using namespace std;



int main() {
    unordered_map<string, int> m;
    m["gfg"] = 10;
    m["coursera"] = 20;
    m.insert({"indian", 30});
    for (auto i: m) {
        cout << i.first << " : " << i.second <<endl; 
    }
    auto it = m.find("gfg");
    if(it != m.end()){
        cout << it->second<< endl;
    }
    cout << m.at("coursera") <<endl;

    cout << m.size()<<endl;
    m.erase(m.begin(), m.end());
    cout << m.size() <<endl;

}