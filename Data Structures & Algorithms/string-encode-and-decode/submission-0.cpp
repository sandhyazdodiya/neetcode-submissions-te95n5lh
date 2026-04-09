class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded = "";

        for(int i=0; i<size(strs);i++){
            encoded += strs[i] + '`';
        }
    return encoded;

    }

    vector<string> decode(string s) {
        cout << s;
        vector<string> decoded;
        string curr_string;
        for(int i=0; i<size(s);i++){
            if(s[i] == '`'){
                decoded.push_back(curr_string);
                curr_string = "";
                continue;
            }
            curr_string += s[i];       
        }
    return decoded;
    }
};
