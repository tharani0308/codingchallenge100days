//PLUS ONE
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {  
    for(int i = digits.size() - 1;i >= 0;i--){
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

//MAKE ARRAY OLD
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int en=0,on=0;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        if(temp%2==0)
	            en++;
	        else
	            on++;
	    }
	    if(x%2==0){
	        if(on>0)
	            cout<<en<<endl;
	        else
	            cout<<-1<<endl;
	    }
	    else{
	        cout<<ceil(en/2.0)<<endl;
	    }
	}
	return 0;
}