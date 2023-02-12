//Letter Combiations of a phone number
//https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/896674614/

class Solution {
public:
	vector<string>v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	vector<string> letterCombinations(string numbers) {
		vector<string> res;
		if (numbers.size() == 0)
		{
			return res;
		}
		res.push_back("");

		for (auto d : numbers)
		{
			vector<string>temp;
			for (auto c : v[d - '0'])
			{
				for (auto s : res)
				{
					temp.push_back(s + c);
				}
			}
			swap(temp, res);
		}

		return res;
	}
}; 



//Simple Statistics
//https://www.codechef.com/problems/SIMPSTAT?tab=statement

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int arr[a];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }     
	        sort(arr,arr+a);
	        double sum=0;
	        double avg=0.000000;
	        for(int i=b;i<a-b;i++){
	            sum=sum+arr[i];
	        }
	         avg = sum/(a-(2*b));
	         cout<<fixed<<avg<<endl;
	    }
	return 0;
}
