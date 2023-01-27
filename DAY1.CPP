//FACEBOOK
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,i;
	cin>>a;
	while(a--)
	{
	    int n;
	    cin>>n;
	    int b[n],c[n];
	    for (i=0;i<n;i++)
	    cin>>b[i];
	    for (i=0;i<n;i++)
	    cin>>c[i];
	    int t=0;
	    for(i=0;i<n;i++){
	        if(b[t]<b[i])
	        {
	            t=i;
	        }
	        if(b[t]==b[i]){
	            if(c[i]>c[t]){
	                t=i;
	            }
	        }
	    }
	    cout<<t+1<<endl;
	    
	}
	return 0;
}

//LCM HATES GCD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a; 
    cin>>a;
    while(a--)
    {
     int b,c;
     cin>>b>>c;
     int X=gcd(b,c);
      cout<<lcm(b, X)-gcd(c,X)<<endl;
    }

    return 0;
}

//MANA POINTS 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int b,c;
	    cin>>b>>c;
	    cout<<c/b<<endl;
	}
	return 0;
}