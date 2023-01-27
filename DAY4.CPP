//TWO SUM 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0;
        int high=0;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    low=i;
                    high=j;
                    
                    return {low,high};
                }
            }
        }
        
        return {low,high};
    }
};

//Longest substring without repeating characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.size();
        vector<int> position(128, -1);
        int sol=0;
        
        for( int i=0,j = 0; j < length; j++){
            if(position[s[j]] != -1){
                i = max(i, position[s[j]]+1);
            }
            sol = max(sol, j-i+1);
            position[s[j]] = j;
        }
        
        
        return sol;
    }
};