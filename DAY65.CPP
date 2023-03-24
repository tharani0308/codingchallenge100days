//Valid Palindrome
//https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(!isalnum(s[left]))
                left++;
            else if(!isalnum(s[right]))
                right--;
            else if(tolower(s[left])!=tolower(s[right]))
                return false;
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};

//Isomorphic Strings
//https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
   bool isIsomorphic(string s, string t) {
        char map_s[128] = { 0 };
        char map_t[128] = { 0 };
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            if (map_s[s[i]]!=map_t[t[i]]) return false;
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;
        }
        return true;    
    }
};

