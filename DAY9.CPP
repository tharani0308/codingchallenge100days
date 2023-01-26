//Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        long int i = 0, j = height.size() - 1;
        long int  water = 0;
        while (i < j) {
            water = max(water, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return water;
    }
};


//The Array Problem
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long a;
        cin >>a;
        int arr[a];
        long sum = 0;
        for(int i= 0; i< a;i++){
            cin >>arr[i];
            sum = sum + arr[i];
        }
        
        for(int i = 0;i<a;i++){
            cout<<sum-arr[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}