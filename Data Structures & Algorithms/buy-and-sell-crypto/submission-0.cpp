class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int max_profit = 0;

        for(int i = 1; i < size(prices); i++){
            if (prices[i] < buy){
                buy = prices[i];
            }else{
                max_profit = max(max_profit, prices[i]-buy);
            }
        }

        return max_profit;
        
    }
};

// 10, 1 : 1 profit = 0

// 1, 5 : profit = 4

// 1, 6 : profit : 5

// 1, 7 : profit : 6

// 1, 1 
