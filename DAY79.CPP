//COUNT DISTINCT NUMBERS ON BOARD
//https://leetcode.com/problems/count-distinct-numbers-on-board/

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1){
            return 1;
        }
        return n-1;
    }
};

//MAXIMUM DIFFERENCE BY REMAPPING A DIGIT
//https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/

class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        string t=s;
        char c=s[0];
        char d=s[0];
        int i=0;
        while(true){
            if(s[i]!='9'){
                 c=s[i];
                break;
            }
            else{
                i++;
            }
        }
        replace(s.begin(),s.end(),c,'9');
        replace(t.begin(),t.end(),d,'0');
        return stoi(s)-stoi(t);
    }
};


