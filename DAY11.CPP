//3Sum closest
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int length = nums.size();
        int result = nums[0]+nums[1]+nums[2];     
        if(length==3)
            return result;    
        sort(nums.begin(),nums.end());
        for(int i=0;i<length-2;i++){
            int j = i+1;
            int k = length-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(target<sum && j<k)
                    k--;
                else j++;
                if(abs(sum-target)<abs(result-target))
                    result =sum;  
            }
        }
        return result;
    }
};


//Asymmetric swaps
#include <bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int size = 2*n;
	    int a[size];
	    for(int i=0;i<size;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+size);
	    int sol = INT_MAX;
	    for(int i=0;i<n+1;i++)
	    {
	        sol = min(sol,a[n+i-1]-a[i]);
	    }
	    cout<<sol<<endl;
	    
	}
	return 0;
}
