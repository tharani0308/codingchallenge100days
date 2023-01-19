//HACKERMAN
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=a+b;
	    bool flag=0;
	    for(int i=2;i<=c/2;i++){
	        if(c%i==0){
	        flag=1;
	        break;
	        }
	    }
	    if(flag==1){
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	    
	}
	return 0;
}


//CARPET INTO BOX
class Solution{
    public:
    int carpetBox(int A,int B,int C,int D){
      if((A<=C&&B<=D) || (B<=C&&A<=D)){
          return 0;
      }
      if(A>C && A>D){
         return 1+carpetBox(A/2,B,C,D);
       }
      if(B>C && B>D){
         return 1+carpetBox(A,B/2,C,D);
       }
      return min(1+carpetBox(A/2,B,C,D),1+carpetBox(A,B/2,C,D));
    }
};