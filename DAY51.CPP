//Fibonacci number
//https://leetcode.com/problems/fibonacci-number/


class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        } 
        int num1 = 0, num2 = 1, fib;
        for(int i=2;i<=n;i++){
            fib = num1+num2;
            num1 = num2;
            num2 = fib;
        }
        return fib;
    }
};
//Power of three 
//https://leetcode.com/problems/power-of-three/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)    
        {
            return true;
        }
        if(n==0){
            return false;
        }    
        return n%3!=0 ? false : isPowerOfThree(n/3);
    }
};