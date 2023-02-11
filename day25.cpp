//Lengh of Last Word
//https://leetcode.com/problems/length-of-last-word/submissions/896069550/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0, position=0;
        for(int i {(int)s.size()-1};i>=0;i--){
            if(isalpha(s[i])){
                position = i;
                break;
            }
        }
        for(int i = position; i>=0;i--){
            if(!isalpha(s[i])) break;
            length++;
        }
        return length;
    }
    
};

//The block game
//https://www.codechef.com/problems/PALL01?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	   int n,s=0,rem,num;
	   cin>>n;
	   num = n;
	   while(n > 0) {
	       rem = n%10;
	       s = (s*10) + rem;
	       n = n/10;
	   }
	   if(num == s) {
	       cout<<"wins"<<endl;
	   }else {
	       cout<<"loses"<<endl;
	   }
	}
	return 0;
}