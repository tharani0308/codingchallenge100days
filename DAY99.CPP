//BINARY SEARCH
//https://leetcode.com/problems/binary-search/description/?envType=study-plan&id=algorithm-i

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1,mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(target==nums[mid]){return mid;}
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
        
    }
};


//CONSTRUCT THE TRIANGLE 
//https://leetcode.com/problems/construct-the-rectangle/description/

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int length=sqrt(area);
        while(area % length){
            length--;
        }
        return vector<int> {area/length,length};
    }
};