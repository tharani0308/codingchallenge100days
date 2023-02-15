//Zigzag conversion
//https://leetcode.com/problems/zigzag-conversion/submissions/898633036/

class Solution{
    public:
string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string rows[numRows];
        int curRow = 0, step = 1;
        for (char ch : s) {
            rows[curRow] += ch;
            if (curRow == numRows - 1) step = -1;
            else if (curRow == 0) step = 1;
            curRow += step;
        }
        string res;
        for (string row : rows) res += row;
        return res;
    }
};

//Codechef Airlines from Starters77
//https://www.codechef.com/START77D/problems/AIRLINES

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a*10< b || a*10 ==b){
	        cout<<a*10*c<<endl;
	    }
	    else{
	        cout<<b*c<<endl;
	    }
	}
	return 0;
}


//Tom and Jerry Chase from Starters77
//https://www.codechef.com/START77D/problems/JERRYCHASE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>=b){
	        cout<<"NO"<<endl;
	    }
	    else if(a<b){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}

