//LONGEST PALINDROME SUBSTRING
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        if (n == 0)
            return "";
        bool dp[n][n];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; i++)
            dp[i][i] = true;
        string ans = "";
        ans += s[0];
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    if (j - i == 1 || dp[i + 1][j - 1])
                    {
                        dp[i][j] = true;
                        if (ans.size() < j - i + 1)
                            ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};


//MAKELENGTH1 FROM STARTERS 53
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    string s;
	    cin>>s;
	    bool flag=true;
	    if(a==1){cout<<"YES"<<endl;continue;}
	    for(int i=0; i<a; i++){
	        if(s[i]=='1'){
	            int count=0;
	            while(i<a && s[i]=='1'){
	                count++;
	                i++;
	            }
	            if(count%2==1){flag=false;break;}
	        }
	    }
	    if(flag)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
