//Maximum Average Subarray
//leetcode.com/problems/maximum-average-subarray-i/description/

class Solution {
public:
        double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double max_sum=0;
        int i=0;
        for(;i<k;i++) 
        {
            sum+=nums[i];
        }
        max_sum=sum;
        int j=0;
        while(i<nums.size())
        {
            sum-=nums[j++];
            sum+=nums[i++];
            max_sum=max(max_sum,sum);
        }
        return max_sum/k;
        
    }
};

//Contains Duplicate II
//leetcode.com/problems/contains-duplicate-ii/description/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        int n = nums.size();  
        for(int i=0; i<n; i++)
        {
            if(map1.count(nums[i]))
            {
                if(abs(i-map1[nums[i]])<=k)
                    return true;
            }
            map1[nums[i]] = i;
        }
        return false;
    }
};