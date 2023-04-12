//Guess Number Higher or Lower
//https://leetcode.com/problems/guess-number-higher-or-lower/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=0; 
        int j=n;
        while (i<=j){
            int midterm= i+(j-i)/2;
            if (guess(midterm) == 0){
                    return midterm;
            }
            if (guess(midterm)==-1){
                j= midterm-1;
            }
            else i= midterm+1;
        }
        return i;
    }
};


//Arranging Coins
//https://leetcode.com/problems/arranging-coins/


class Solution{
public:
    int arrangeCoins(int n) {
        int count = 1;
        while(n>0)
        {
            if(n>=count)
            {
                n=n-count;
                count++; 
            }
            else
            {
               n=n-count;
            }
        }
        return count-1;
    }
};