#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int arr_len = size(nums);
        int s_len = size(s);
        bool ans = arr_len != s_len;
    return ans;
    }
};