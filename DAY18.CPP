//Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int a = nums[0];
        for(int i = 1; i<nums.size();i++) {
            a = a ^ nums[i];
        }
        return a;
    }
};


//Playing with Strings
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    string str1,str2;
	    cin>>str1>>str2;
	    int str1_count=0,str2_count=0;
	    for(int i=0;i<a;i++){
	        if(str1[i]=='1'){
	            str1_count++;
	         }
	        if(str2[i]=='1'){
	            str2_count++;
	        }
	}
	if(str1_count==str2_count){
	    cout<<"YES\n";
	}
	else{
	    cout<<"NO\n";
	}
   }
}
