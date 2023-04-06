//Most Frequent Even Element
//https://leetcode.com/problems/most-frequent-even-element/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
            map<int,int>counts;     
            for(int i:nums){
                if(i%2==0)
                   counts[i]++;    
            }
            int freq=INT_MIN,ans=-1;
            for(auto i: counts){
                    if(i.second>freq){
                            ans=i.first, freq=i.second;
                    }
            }
            return ans;
    }
};

//Add two integers
//https://leetcode.com/problems/add-two-integers/

class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};