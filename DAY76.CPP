//Number of common factors
//https://leetcode.com/problems/number-of-common-factors/


class Solution 
{
public:
    int commonFactors(int a, int b) 
    {
        int count=0;
        int n = min(a, b);
        
        for(int i=1; i<=n; i++)
        {
            if(a%i==0 && b%i==0)
                count++;
        }
        return count;
        
    }
};

//Smallest Even Multiple 
//https://leetcode.com/problems/smallest-even-multiple/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(!(n%2)) {
            return n;
        }
        return n*2;
    }
};