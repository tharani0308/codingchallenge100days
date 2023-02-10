//Chef and Happy String 
//https://www.codechef.com/problems/HAPPYSTR?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t; 
	while(t--){
	    string str;
	    cin>>str;
	    int count=0;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
	              count++;
	              if(count>=3) {
	                  cout<<"Happy"<<endl;
                            break;	       
	                  }
	        }
	        else count=0;
	    }
	    if(count!=3){
	        cout<<"Sad"<<endl;
	    }
	}
	return 0;
}