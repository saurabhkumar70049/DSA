#include<bits/stdc++.h>
using namespace std;

vector<int, int> mergerOverlapping(vector<vector<int>> &vec) {
    
    vector<int, int> vec1;
    vec1.push_back(make_pair(vec[0][0], vec[0][1]));
    for (int i = 1; i < vec.size(); i++) {
        int indicator = 0;
        for(int j = 0; j < vec1.size(); j++) {
            if(vec[i][0] <= vec1[j][1] && vec[i][1] >= vec1[j][0]) {
                vec1[j].first = min(vec1[j].first, vec[i][0]);
                vec1[j].second = max(vec1[j].second, vec[i][1]);
                indicator = 1;
            }
        }
        if(indicator == 0) {
            vec1.push_back({vec[i][0], vec[i][1]});

        }
    }
    return vec1;
}

int main() {
    vector<vector<int>> vec = {{7, 9}, {6, 10}, {4, 5}, {1, 3}, {2, 4}};
    vector<int, int> vec1 = mergerOverlapping(vec);
    for (auto i : vec1) {
        cout << "{";
        for(auto j : i) {
            cout << j << ",";
        }
        cout << "}" << ", ";
    }
}