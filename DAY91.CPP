//Number of segments in a string 
//https://leetcode.com/problems/number-of-segments-in-a-string/

class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string str;
        int count=0;
        while(ss>>str) count++;
        return count;
    }
};

//In subsequence
//https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length();
        int j = 0;
        for(int i=0; i<n; i++){
            if(s[j] == t[i]){
                j++;
            }
        }
        if(j == s.length()){
            return true;
        }
        return false;
    }
};