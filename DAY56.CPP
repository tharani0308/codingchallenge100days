//Maximum capacity
//https://www.codechef.com/START81D/problems/MAXCAP

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a>8) {
	        cout<<"NO"<<endl;
	    }
	    else if(a*b>500) 
	    {
	        cout<<"NO"<<endl;
	    }
	    else 
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}

//Divide Pages
//https://www.codechef.com/START81D/problems/BOOKPAGES

#include <iostream>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t,n,odd,even,pages;
	cin>>t;
	while(t--){
	  cin>>n;
	  ll odd=0;even=0;
	  for(ll i=0;i<n;i++){
	  cin>>pages;
	   if(pages%2==0)
	   {
	       even++;
	   }
	   else{
	       odd++;
	   }
	  }
	if(odd%2!=0){
	    cout<<"NO"<<endl;
	}
	else{
	cout<<"YES"<<endl;
	}
}
return 0;
}



//Sunny Day
//https://www.codechef.com/START81D/problems/SUNNYDAY

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	  cin>>n;
	  if(n>24){
	      cout<<"YES"<<endl;
	  }
	  else{
	      cout<<"NO"<<endl;
	  }
	}
	return 0;
}

