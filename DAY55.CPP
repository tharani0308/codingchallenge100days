//MISSING NUMBER
//https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int solution = nums.size();
        int n=0;
        
        for(int num:nums){
            solution ^= num;
            solution ^= n;
            n++;
        }
        
        return solution;
    }
};

//SQRT(X)
//https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return x;
        int front = 1, end = x;
        while (front <= end) {
            int mid = front + (end - front) / 2;
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                end = mid - 1;
            }
            else {
                front = mid + 1;
            }
        }
        return end;
    }
};