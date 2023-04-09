//ADD STRINGS
//https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int a=num1.size();
        int b=num2.size();
        if(a>b){
            for(int i=0;i<a-b;i++){
                num2='0'+num2;
            }
        }
        else if(b>a){
            for(int i=0;i<b-a;i++){
                num1='0'+num1;
            }
        }
        int carry=0;
        string ans="";
        for(int i=num1.size()-1;i>=0;i--){
            int sum=(num1[i]-'0')+(num2[i]-'0')+carry;
            carry=sum/10;
            ans=to_string(sum%10)+ans;
        }
        if(carry>0){
            ans=to_string(carry)+ans;
        }
        return ans;
    }
};

//VALID ANAGRAM
//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
      if (s==t){
          return true;
      }
      else{
     return false;
      }
       
    }
};