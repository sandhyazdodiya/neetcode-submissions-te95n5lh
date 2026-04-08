#include <unordered_map>


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> string_map = {};
        string sorted_string = "";
        for(int i =0; i<size(strs); i++){
            string sorted_string = strs[i];
            sort(sorted_string.begin(), sorted_string.end());
            string_map[sorted_string].push_back(strs[i]);

        }
        vector<vector<string>> ans;
        for(auto& pair : string_map) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
