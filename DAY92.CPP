//COMBINATION SUM
//https://leetcode.com/problems/combination-sum/

class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>&arr,int start,int rem,vector<int>&temp){
        if(rem<0)return;
        if(rem==0)ans.push_back(temp);

        for(int i=start;i<arr.size();i++){
            temp.push_back(arr[i]);
            backtrack(arr,i,rem-arr[i],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        backtrack(candidates,0,target,temp);
        return ans;
    }
};


//COMBINATION SUM II
//https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& cand, int sum, int start, vector<int> v){
        if(sum < 0){    
            return;
        }
        else if(sum == 0){  
            ans.push_back(v);
            return;
        }
        for(int i=start;i<cand.size();i++){
            if(i > start && cand[i] == cand[i-1]){  
                continue;
            }
            if(sum-cand[i] < 0) {  
                break;
            }
            v.push_back(cand[i]);
            solve(cand,sum-cand[i],i+1,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(), cand.end());
        vector<int> v;
        solve(cand, target, 0, v);
        return ans;
    }
};
