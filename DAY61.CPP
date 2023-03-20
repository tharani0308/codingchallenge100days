//Longest Palindrome 
//https://leetcode.com/problems/longest-palindrome/


class Solution {
public:
    int longestPalindrome(const string &s) 
    {
        int count[128]{};
        for (auto c : s) 
            ++count[c];
        for (auto num : count) 
            count[0] += num & 1;
        return s.size() - count[0] + (count[0] > 0);
    }
};

//Assign Cookies
//https://leetcode.com/problems/assign-cookies/

class Solution {
    public:
  int findContentChildren(vector<int>& g,vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i])
                i++; 
            j++;
        }
        return i;
    }
};