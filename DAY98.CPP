//N TH TRIBONACCI NUMBER
//https://leetcode.com/problems/n-th-tribonacci-number/


class Solution {
public:
    int tribonacci(int n) 
    {
        if(n==0){
            return 0;
        }
        if(n==1 || n==2) {
            return 1;
        }

        int t0=0;  
        int t1=1;  
        int t2=1;  
        int sp=0;

        for(int i=3;i<=n;i++)
        {
            sp = t0+t1+t2;      
            t0=t1;               
            t1=t2;               
            t2=sp;               
        }
        return sp;
    }
};

//PERFECT NUMBER
//https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;   
        for(int i = 1; i <= num / 2; i++)
        {
            if(num%i == 0)
            {
                sum = sum + i;
            }
        }
        if(sum == num)
            return true;
        return false;
    }
};