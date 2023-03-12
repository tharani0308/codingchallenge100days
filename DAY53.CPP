//DECODE STRING
//https://leetcode.com/problems/decode-string/

class Solution {
public:
    string helper(int &i,string s){
        int num=0;
        string word="";
        for(;i<s.length();i++)
        {
            if(s[i]>='0' and s[i]<='9')
                num=num*10+s[i]-'0';
            else if(s[i]=='[')
            {
                string ans=helper(++i,s);
                for(;num>0;num--)word+=ans;
            }
            else if(s[i]==']')
                return word;
            else
                word+=s[i];
        }
        return word;
    }
    string decodeString(string s) {
        int i=0;
        return helper(i,s);
    }
};

//POW(X,N)
//https://leetcode.com/problems/powx-n/


class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        double num = 1;
        if(n>=0){
            while(n>0){
                num *= x;
                n--;
            }
        }
        else{
            n = -n;
            while(n>0){
                num *= x;
                n--;
            }
            num = 1.0/num;
        }
        return num;
    }
};


