//Pascal's Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol(numRows);
        for(int i=0;i<numRows;i++)
        {
            sol[i].resize(i+1);
            sol[i][0]= sol[i][i]=1;
            for(int j=1;j<i;j++)
            {
                sol[i][j] =sol[i-1][j-1] + sol[i-1][j];
            }
        }
        return sol;
    }
};

//That is My Score!
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        int arr1[size];
        int arr2[size];
        int sum = 0;
        for(int i=0;i<size;i++)
        {
            cin>>arr1[i]>>arr2[i];
        }
        for(int i=0;i<9;i++)
        {
            int max=0;
            for(int j=0;j<size;j++)
            {
                if(i==arr1[j] && arr2[j]>max)
                {
                    max=arr2[j];
                }
        
            }
            sum = sum+max;
        }
        cout<<sum<<endl;
    }
	return 0;
}