//Fizz Buzz
//https://leetcode.com/problems/fizz-buzz/description/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
         vector<string> ans(n);
        for(int i=1; i<=n; ++i)
        {
            if(0 == i%3)
            {
                ans[i-1] += "Fizz";
            }
            if(0 == i%5)
            {
                ans[i-1] += "Buzz";
            }
            if(ans[i-1].empty())
            {
                ans[i-1] += to_string(i);
            }
           
        }
        return ans;
    }
};

//Intersection of two arrays
//https://leetcode.com/problems/intersection-of-two-arrays/description/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1, mp2;
      vector<int> res;
      for (auto x : nums1)
         mp1[x]++;
      for (auto x : nums2)
         mp2[x]++;
      for (auto x : mp1) {
         int cnt = 0;
         cnt = min(x.second, mp2[x.first]);
         if (cnt > 0)
            res.push_back(x.first);
         }
         return res;
    }
};