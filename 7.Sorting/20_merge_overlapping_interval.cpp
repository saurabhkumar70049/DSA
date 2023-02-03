/*Given an array in which we have some interval and out tast is to merge it if there is any interval in overllape to each other
example : arr[] = {{6,7}, {5, 10}, {1, 3}, {8, 9}, {2, 4}}
output  : arr[] = {{5, 10}, {1, 4}}*/

#include<bits/stdc++.h>
using namespace std;

// vector<pair<int, int>> mergerOverlapping(vector<pair <int,int>> &vec) { //time complexity = O(nlogn), space complexity = O(n)
//     sort(vec.begin(), vec.end());
//     vector<pair<int, int>> vec1;
//     vec1.push_back(make_pair(vec[0].first, vec[0].second));
//     int index = 0;
//     for(int i = 1; i < vec.size(); i++) {
        
//         if(vec[i].first <= vec[i-1].second) {
//             vec1[index].first = min(vec1[index].first, vec[i].first);
//             vec1[index].second = max(vec1[index].second, vec[i].second);
//         }
//         else {
//             vec1.push_back(make_pair(vec[i].first, vec[i].second));
//             index++;
//         }
//     }
//     return vec1;
// }

vector<pair<int, int>> mergerOverlapping(vector<pair <int,int>> &vec) { //here we optimize the space complexity to O(1)
    sort(vec.begin(), vec.end());
    // vector<pair<int, int>> vec1;
    // vec1.push_back(make_pair(vec[0].first, vec[0].second));
    int index = 0;
    for(int i = 1; i < vec.size(); i++) {
        
        if(vec[i].first <= vec[index].second) {
            vec[index].first = min(vec[index].first, vec[i].first);
            vec[index].second = max(vec[index].second, vec[i].second);
        }
        else {
            // vec1.push_back(make_pair(vec[i].first, vec[i].second));
            index++;
            vec[index] = vec[i];
        }
    }
    vec.resize(index+1);
    return vec;
}

int main() {
    vector<pair <int , int>> vec = {{7, 9}, {6, 10}, {4, 5}, {1, 3}, {2, 4}};
    vector<pair<int, int>> vec1 = mergerOverlapping(vec);
    for (int i = 0; i < vec1.size(); i++) {
       cout << "{" << vec1[i].first << ", " << vec1[i].second << "} ";
    }
}