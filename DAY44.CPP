//MAKE THE STRING GREAT
//https://leetcode.com/problems/make-the-string-great/

class Solution {
public:
    string makeGood(string s) {
     
      
        for(int i=0; i<s.length()-1; i++){       
            if((s[i]==s[i+1]+32) || (s[i]==s[i+1]-32))
            {  
                s.erase(i,2);
                i=max(-1,i-2);              
            }
            if(s.length()==0)
                break;    
        }
       return s; 
    }
};

//BACKSPACE STRING COMPARE
//https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j=0,k=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='#')
           {
                j--;
                j=max(0,j);
           }
           else
           {
               s[j]=s[i];
               j++;
           }
        }
        for(int i=0;i<t.size();i++)
        {
           if(t[i]=='#')
           {
                k--;
                k=max(0,k);
           }
           else
           {
               t[k]=t[i];
               k++;
           }
        }
        if(j!=k) return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i]) 
                return false;
            }
            return true;
        } 
    }
};


