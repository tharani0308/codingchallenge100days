//Integer to Roman
//https://leetcode.com/problems/integer-to-roman/submissions/893327405/
class Solution {
public:
    string intToRoman(int a) {
    string str[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[13] = {1000, 900, 500, 400, 100,  90,  50,  40, 10,   9,   5,   4,  1};
    string res;
    for (int i=0; i<13; i++) {
        for (int j=0; j<(a/val[i]); j++) {
            res += str[i];
        }
        a%= val[i];
    }
    return res;
}
};


//Binary String Cost
//https://www.codechef.com/problems/BSCOST?tab=statement
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    string str;
	    cin>>str;
	    int zero=0, one=0;
	    for (int i = 0; i < a; i++)
        {
            if (str[i]=='1')
            {
                one++;
            }
            else zero++;
        }
        if (one>0 && zero>0)
        {
            if (b>c)
            {
                cout<<c<<endl;
            }
            else cout<<b<<endl;
            
        }
        else{
            cout<<0<<endl;
        }
	}
}
