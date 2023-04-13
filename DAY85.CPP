//ISland Perimeter
//https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0, a = grid.size(), b = grid[0].size(), rep = 0;
        
        for(int i=0;i<a;i++) 
            for(int j=0;j<b;j++) 
                    if(grid[i][j]==1) 
                    {
                        res++;
                        if(i!=0 && grid[i-1][j]==1) rep++;
                        if(j!=0 && grid[i][j-1]==1) rep++;
                    }
        
        return (4 * res) - (2 * rep);
    }
};

//Pet Store
//https://www.codechef.com/problems/PETSTORE

#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    unordered_map<int, int> map;
	    int a,b;
	    cin>>a;
	    for(int i=1;i<=a;i++){
	       cin>>b; 
	       map[b]++;
	    }
	    int count{};
	    for(auto i:map){
	        if(i.second%2!=0){
	            count++;
	        }
	    }
	    if(count==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


//Todolist
//https://www.codechef.com/problems/TODOLIST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,c=0;
	    cin>>n;
	    for(int i= 0;i<n;i++){
	        cin>>x;
	        if(x>=1000){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
