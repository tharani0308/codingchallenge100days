//READ PAGES
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N,X,Y;
        cin>>N>>X>>Y;
        if(X*Y>=N){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}



//400M RACE
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(A<B && A<C)
        {
            cout<<"ALICE"<<endl;
        }
        else if(B<A && B<C)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"CHARLIE"<<endl;
        }
    }
    return 0;
}


//REDISTRIBUTING CHOCOLATES
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c;
	    c=a+b+c;
	    if(c>=6){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}



//ZERO STRING
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    for(int i=0;i<n;i++){
	    if(s[I]=='0'){
	        a++;
	    }
	    else{
	        b++;
	    }
	    }
	    if(a>=b){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<a+1<<endl;
	    }
	}
	return 0;
}


//NOT DIVISIBLE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            cout<<1<<" ";
	        }
	        else{
	            cout<<2<<" ";
	        }
	        cout<<endl;
	    }
	    
	return 0;
}
