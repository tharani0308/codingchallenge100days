//Make the Array!
#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long a,b=0,c=0,d;
	    cin>>a;
	    for(long long i=1;i<=a;i++){
	        cin>>d;
	        b=b+d*i;
	    }
	    for(long long i=1;i<=a;i++){
	        cin>>d;
	        c=c+d*i;
	    }
	    cout<<c-b<<"\n";
	}
	return 0;
}



//Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a=0,b=0;
        while(b<nums.size()){
            if(nums[b]!=val){
                nums[a]=nums[b];
                a++;
                b++;

            }
            else {
                b++;
            }
        }return a;
    }
};