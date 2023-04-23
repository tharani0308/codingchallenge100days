//Detect Capital
//https://leetcode.com/problems/detect-capital/description/

class Solution {
public:
    bool detectCapitalUse(string word) {
      int allCap=0;
      int firstCap=0;
      for(int i=0;i<word.length();i++){
          if(word[i]>='A' && word[i]<='Z' )
           {
               if(i==0) firstCap=1;
               allCap++;
           }
      }  
      if(allCap==word.length() || (firstCap==allCap))
        return true;
      return false; 
    }
};

//Set mismatch
//https://leetcode.com/problems/set-mismatch/


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size(), 0);
        int miss, hit;
        for(int i=0; i<nums.size(); i++) freq[nums[i]-1]++;
        for(int i=0; i<nums.size(); i++){
            if(freq[i] == 0) miss = i+1;
            if(freq[i] == 2) hit = i+1;
        }
        nums.clear();
        nums.push_back(hit);
        nums.push_back(miss);
        return nums;
    }
};