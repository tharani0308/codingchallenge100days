//Convert a number into hexadecimal number
//https://leetcode.com/problems/convert-a-number-to-hexadecimal/

class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        u_int num1=num;
        string str="";
        while(num1){
            int temp=num1%16;
            if(temp<=9){
                 str+= (48+temp);   
            }
            else{
                str+=(87+temp);
            }
            num1=num1/16;
        }    
        reverse(str.begin(),str.end());
        return str;
    }

};

//Valid perfect square
//https://leetcode.com/problems/valid-perfect-square/
