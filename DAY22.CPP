//Longest Common Prefix
//https://leetcode.com/problems/longest-common-prefix/submissions/894161699/
class Solution {
public:
    string longestCommonPrefix(vector<string>& s){
        int n =s.size();
        string res; 
        sort(s.begin(), s.end());
        string a = s[0];
        string b = s[n-1];
        for(int i =0; i< a.size(); i++){
            if(a[i] == b[i]){
                res += a[i];
            }else break;
        }
        return res;
    }
};

//Alternating String 
//https://www.codechef.com/problems/ALTSTR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	     int res1 = 0, res2 = 0;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == '0')
	        res1++;
	        else
	        res2++;
	    }
	    if(res1 == n || res2 == 0 || res2== n|| res1== 0)
	    cout << 1 << "\n";
	    else if(res1 == res2)
	    cout << 2*min(res1, res2) << "\n";
	    else
	    cout << 2*min(res1, res2)+1 << "\n";
	    
	}
	return 0;
}