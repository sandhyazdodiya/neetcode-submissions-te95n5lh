class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int curr_max = 0;

        for(int i=0; i<size(nums); i++){
            if (nums[i] == 1){
                curr_max += 1;
                maxi = max(curr_max, maxi);
            }else{
                curr_max = 0;
            }
        }
        return maxi;
        
    }
};