//REVERSE INTEGER
class Solution {
public:
int reverse(int x) {

long long int a, remainder=0;
while(x!=0)
{
a=x%10;
x=x/10;
remainder=remainder*10+a;

}
if(remainder<INT_MIN || remainder>INT_MAX)
{
return 0;
}
else{
return remainder;
}
}
};

//SLOWSOLUTION 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int MAX_T,MAX_N,SUM_N;
	    cin>>MAX_T>>MAX_N>>SUM_N;
	    if(MAX_T*MAX_N<=SUM_N){
    	        cout<<(MAX_T*(MAX_N*MAX_N))<<endl;
	    }
	    else{
	  cout<<((SUM_N/MAX_N*MAX_N*MAX_N)+((SUM_N%MAX_N)*(SUM_N%MAX_N)))<<endl;
	    }
	}
	return 0;
}

//NAHAANE JAA
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a,b;
	    int arr[a];
	    int c;
	    for(int i=0;i<a;i++)
	    {
	        cin>>arr[i];
	    }
	    if(a==1 && a[0]=b){
	        c=1;
	    }
	    else {
	        c=0;
	    }
	    for(int i=0;i<a-1;i++)
	    {
	        if(a[i]==b){
	            c=1;
	            break;
	        }
	    }     
	        
	        if(c==1)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	        
	}
	return 0;
}
