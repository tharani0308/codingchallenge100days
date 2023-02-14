//Compress the Video 
//https://www.codechef.com/problems/COMPRESSVD?tab=statement

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count = 0;
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==arr[i+1])
			{
				count++;
			}
		}
		cout<<" "<<n-count<<endl;
	}
}


//String Game
//https://www.codechef.com/problems/COMPRESSVD?tab=statement

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    string s;
	    cin>>a;
	    cin>>s;
	    if(a%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int count=1;
        sort(s.begin(),s.end());
        int flag=1;
        for(int i=0;i<a-1;i++)
        {
            if(s[i]==s[i+1])
                count++;
            else if(s[i]!=s[i+1])
            {
                if(count%2!=0)
                {
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
                count=1;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
    }
    return 0;
}
 
