//Add to Array form of Integer
//https://leetcode.com/problems/add-to-array-form-of-integer/description/

class Solution 
{
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        int carry=0, sum, i=num.size()-1;
        while(k || carry)
        {
            sum = carry + k%10;
            k /= 10;

            if(i>=0)
            {
                sum += num[i];
                num[i] = sum%10;
                i--;
            }
            else
            {
                num.insert(num.begin(), sum%10);
            }
            carry = sum/10;
        }
        return num;
        
    }
};

//Largest Perimeter Triangle 
//https://leetcode.com/problems/largest-perimeter-triangle/description/

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = nums.size() - 1; i >= 2; i--) 
            if (nums[i] < nums[i - 1] + nums[i - 2]) 
                return nums[i] + nums[i - 1] + nums[i - 2];
        
        return 0;
  
    }
};