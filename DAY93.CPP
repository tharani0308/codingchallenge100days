//Repeated Substring Pattern
//https://leetcode.com/problems/repeated-substring-pattern/\

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int l = n/2;l>0;l--){
            if(n%l==0)
                if(s.substr(0,n-l)==s.substr(l)) return true;
        }
        return false;
    }
};

//Rotate String
//https://leetcode.com/problems/rotate-string/

class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            s+=s[0];
            s.erase(0,1);
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};
