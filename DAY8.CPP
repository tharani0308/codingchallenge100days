//Remove Duplicates from the sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=0;
        for(int a=1;a<nums.size();a++){
            if(nums[a]!=nums[res]){
                res++;
                nums[res]=nums[a];
            }
        }
        return res+1;
    }
};

//Devu and friendship testing
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int arr[a];
	    
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr, arr + a);
	    
	    int count=0;
	    for(int i=0;i<a;i++){
	        if(arr[i]!=arr[i+1]){
	            count++;
	        }
	       
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}