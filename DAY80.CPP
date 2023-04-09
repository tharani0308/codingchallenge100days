//THIRD MAXIMUM NUMBER
//https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        long one = LONG_MIN, two = LONG_MIN, three = LONG_MIN;
        for (int num : nums) {
            if (num == one || num == two || num == three)
                continue;
            
            if (num > one) {
                three = two;
                two = one;
                one = num;
            } else if (num > two) {
                three = two;
                two = num;
            } else if (num > three) {
                three = num;
            }
        }
        
        return three == LONG_MIN ? one : three;
    }
};

//FIRST BAD VERSION
//https://leetcode.com/problems/first-bad-version/description/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution{	
public:
int firstBadVersion(int n) 
{
	int low = 0;
	int high = n;
	while(low < high)
	{
		int mid = low + (high - low)/2;
		if(isBadVersion(mid))
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
	}

	return low;
}
};