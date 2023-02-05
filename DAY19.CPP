//String to Integer
class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        int i = 0;
        long num = 0;
        bool neg = false;
        while(i < len && s[i] == ' ' )
        {
            i++;
        }
        if(i < len && s[i] == '-')
        {
            neg = true;
            i++;
        } else if(i < len && s[i] == '+')
        {
            i++;
        }
        while(s[i] >= '0' && s[i] <= '9')
        {
            num = num*10 + s[i] - '0';
            i++;    
            if(num > INT_MAX)
                break;
            
        }
        if(num > INT_MAX)
        {
            if(neg)
                return INT_MIN;
            else
                return INT_MAX;
        }
        if(neg)
            return (num  * -1);
        else return num;
    }
};





//Equal Strings
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int arr1[26];
	    string s,s1;
	    cin>>s>>s1;
	    for(int i=0;i<26;i++)
	    arr1[i]=0;
	    for(int i=0;i<a;i++)
	    {
	        if(s[i]!=s1[i])
	        {
	            arr1[s1[i]-'a']=1;
	        }
	    }
	    int b=0;
	    for(int i=0;i<26;i++)
	    {
	        if(arr1[i]==1)
	        b++;
	    }
	    cout<<b<<endl;
	}    
	return 0;
}
