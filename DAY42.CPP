//FINAL PRICES WITH A SPECIAL DISCOUNT IN A SHOP
//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for (int i = 0 ; i < prices.size() ; i++)
        {
            for (int j = i + 1 ; j < prices.size() ; j++)
            {
                if (prices[j] <= prices[i])
                {
                    prices[i] -= prices[j] ; 
                    break ; 
                }
            }
        }
        return prices ; 
    }
};

//BASEBALL GAME
//https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        int value1;
        int value2;
        int ans = 0;
        stack<int>stack;
        for(string i:ops)
        {
            if(i == "C")
            {
                stack.pop();
            }
            else if(i == "D")
            {
                stack.push(stack.top()*2);
            }
            else if(i == "+")
            {
                value1 = stack.top();
                stack.pop();
                value2 = stack.top();
                stack.push(value1);
                stack.push(value1 + value2);
            }
            else
            {
                stack.push(stoi(i));
            }
        }
        while(stack.size() != 0)
        {
            ans += stack.top();
            stack.pop();
        }
        return ans;
    }
};