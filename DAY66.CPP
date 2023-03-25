//CAN PLACE FLOWERS
//

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        if(n==0)
            return true;
        if(len==0)
            return false;
        int cnt=0;
        for(int i=0;i<len;i++)
        {
            if(flowerbed[i]==0)
            {
                int prev=(i==0 or flowerbed[i-1]==0)?0:1;
                int next=(i==len-1 or flowerbed[i+1]==0)?0:1;
                if(prev==0 and next==0)
                {
                   flowerbed[i]=1;
                    cnt++;
                }
            }
        }
        return cnt>=n;
    }
};

//ARRAY PROBLEM
//https://leetcode.com/problems/array-partition/



class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i+=2)   sum += nums[i];
        return sum;
    }
};