class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res = "";

        for(int i=0; i <size(strs[0]); i++){
            for(int s=0; s<size(strs);s++){
                if (i == strs[s].size() || strs[0][i] != strs[s][i]){
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};