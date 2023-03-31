//Divide Two Integers
//https://leetcode.com/problems/divide-two-integers/


class Solution {
public:
    int divide(int dividend, int divisor) {
	
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        return dividend/divisor;
    }
};

//Ugly Number
//https://leetcode.com/problems/ugly-number/

class Solution {
public:
bool isUgly(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n%2==0){
            return isUgly(n/2);
        }
        if(n%3==0){
            return isUgly(n/3);
        }
        if(n%5==0){
            return isUgly(n/5);
        }
        return false;
    }
};