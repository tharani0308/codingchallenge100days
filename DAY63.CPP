//Best time to buy and sell stock 
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;
        int minPrice = INT_MAX;
        
        for(int i = 0; i<prices.size(); i++)
        {
            minPrice = min(minPrice,prices[i]);
            maxProf = max(maxProf, prices[i] - minPrice);
        }
        
        return maxProf;
    }
};

//Climbing Stairs 
//https://leetcode.com/problems/climbing-stairs/



class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int prev = 2, prev2 = 1, res;
        for (int i=3; i<=n;i++) {
            res =prev+prev2;
            prev2=prev;
            prev=res;
        }
        return res;
    }
};

