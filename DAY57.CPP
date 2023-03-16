//Majority Element 
//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max,count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if (count == 0) {
                max = nums[i];
                count = 1;
                continue;
            }
            if (max != nums[i]) {
                count--;
            } else {
                count++;
            }
        }
        return max;
    }
    
};

//Contains Duplicate
//https://leetcode.com/problems/contains-duplicate/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
           sort(nums.begin(), nums.end());
    for (int i=0; i<int(nums.size())-1; i++) {
        if (nums[i]==nums[i+1])
            return true;
    }
    return false;    
}
};