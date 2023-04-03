//COUNTING BITS
//https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int n) {
      vector<int> res;
      res.push_back(0);
      for (int i = 1; i <= n; i++) {        
        res.push_back(res[i&(i-1)] + 1);
      }
      return res;        
    }
};

//SUM OF UNIQUE ELEMENTS
//https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            bool isUnique = true;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] == nums[j] && i != j)
                {
                    isUnique = false; 
                    break;
                }
            }
            if(isUnique == true)
            {
                sum += nums[i];
            }
        }      
        
        return sum;   
    }
};