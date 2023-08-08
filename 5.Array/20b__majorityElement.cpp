/*
229. Majority Element II
Medium
7.7K
350
Companies
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109
 

Follow up: Could you solve the problem in linear time and in O(1) space?
*/

#include<bits/stdc++.h>
using namespace std;

// vector<int> majorityElement(vector<int> vec){
//     unordered_map<int, int> mp;
//     vector<int> ans;
//     for(int i = 0; i < vec.size(); i++){
//         mp[vec[i]]++;
//         if(mp[vec[i]] == vec.size()/3 + 1){
//             ans.push_back(vec[i]);
//         }
//         if(ans.size() == 2){
//             return ans;
//         }
//     }
//     return ans;
// }

vector<int> majorityElement(vector<int>& nums) {
    int el1 = 0, el2 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < nums.size(); i++){
        if(c1 == 0 && nums[i] != el2){
            el1 = nums[i];
            c1 = 1;
        }
        else if(c2 == 0 && nums[i] != el1){
            el2 = nums[i];
            c2 = 1;
        }
        else if(el1 == nums[i]){
            c1++;
        }
        else if(el2 == nums[i]){
            c2++;
        }
        else {
            c1--;
            c2--;
        }
    }
    vector<int> vec;
    c1 = 0, c2 = 0;
    
    for(int i = 0; i < nums.size(); i++){
        if(el1 == nums[i]){
            c1++;
        }
        else if(el2 == nums[i]){
            c2++;
        }

        if(c1 == (nums.size()/3)+1){
            vec.push_back(el1);
            c1++;
        }
        else if(c2 == (nums.size()/3)+1){
            vec.push_back(el2);
            c2++;

        }
    }
    return vec;
}

int main() {
    vector<int> vec = {1, 1, 1, 1, 1, 1, 1};
    vector<int> ans = majorityElement(vec);
    cout << "output : ";
    for(int i : ans){
        cout << i << " ";
    }
}