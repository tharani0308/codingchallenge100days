//Range Sum Query
//https://leetcode.com/problems/range-sum-query-immutable/
class NumArray {
public:
    vector<int> array;
    NumArray(vector<int>& nums) {
        array=nums;
    }
    
    int sumRange(int left, int right) {
      int sum=0;
        for(int i=left;i<=right;i++)
        {
            sum+=array[i];
        }
        return sum;
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */


//Move Zeroes
//https://leetcode.com/problems/move-zeroes/description/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int left = 0;
        while(left < nums.size() && nums[left] != 0)
            left++;
        for(int i=left+1;i<nums.size();i++)
        {
            if(nums[i] == 0)
                continue;
            swap(nums[i],nums[left]);
            left++;
        }
        
    }
};
