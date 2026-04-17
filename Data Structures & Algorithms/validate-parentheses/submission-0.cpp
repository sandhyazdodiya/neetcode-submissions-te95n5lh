class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_set<char> st ={'{', '[', '('};
        unordered_map<char, char> dict = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };

        for(int i=0; i< size(s); i++){
            if (st.count(s[i])){
                stk.push(s[i]);
            } else{
                if(stk.empty()){
                    return false;
                }
                char top = stk.top();
                stk.pop();
                if (dict[s[i]] != top) {
                    return false;
                }

            }
        }

        return stk.empty();
        
    }
};

