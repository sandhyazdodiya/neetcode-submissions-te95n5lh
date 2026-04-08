class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        string curr_detail;
        int i = 0;
        while (i < details.size()){
            curr_detail = details[i];
            int age = (curr_detail[11] - '0')*10+(curr_detail[12]-'0');
            if (age > 60) {
                count++;
            }
            i++;
        }
        return count;
    }
};