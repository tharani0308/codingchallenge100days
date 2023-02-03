//Pascal triangle II
class Solution {
public:
    vector<int> getRow(int rowIndex) {   
        vector<int> Pascal(rowIndex + 1, 0);
        Pascal[0] = 1;
        for (int k=0;k<=rowIndex;k++) {    
            for (int i=k;i>0;i--) {
                Pascal[i] = Pascal[i] + Pascal[i - 1];
            }
        }
        return Pascal;
        
    }
};

//The Great Run
#include <iostream>

using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    int sum=0,m;
	    cin>>a>>b;
	    int arr[a];
	    for(int i=0;i<a;i++)cin>>arr[i];
	    for(int i=0;i<b;i++)sum+=arr[i];
	    m=sum;
	    for(int i=b;i<a;i++)
	    {
	        sum+=arr[i]-arr[i-b];
	        m=max(sum,m);
	    }
	    cout<<m<<endl;
	}
	return 0;
}