//Find greatest Common Divisor 
//https://leetcode.com/problems/find-greatest-common-divisor-of-array/

class Solution {
public:
    int findGCD(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int gcd = 1;
            for (int i = 2; i <= nums[0]; i++)
            {
                if (nums[0] % i == 0 & nums[nums.size() - 1] % i == 0)
                    gcd = i;
            }
            return gcd;
        }
};

//Add Digits
//https://leetcode.com/problems/add-digits/

class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int temp = num%10;
            num = num/10 + temp;
        }
        return num;
    }
};

