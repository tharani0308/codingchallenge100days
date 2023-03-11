//Power of Four 
//https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<0){
            return false;
        }
        int ones = 0,pos = 1,ones_pos = 0;
        while(num){
            if(num&1){
            ones+=1,ones_pos = pos;
            
            }
            num>>=1,pos+=1;
        }
        return ones==1&&ones_pos&1;
    }
};

//Power of Two 
//https://leetcode.com/problems/power-of-two/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0){
            return false;
        }
        else if ((n & (n - 1)) == 0){
            return true;
        }
        else {
            return false;
        }
    }
};