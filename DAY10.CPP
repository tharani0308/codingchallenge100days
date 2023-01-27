//CHEF AND DOLLS
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0; i<a; i++){
            cin>>arr[i];
        }
        sort(arr,arr+a);
        for(int i=0; i<a; i=i+2){
            if(arr[i]!=arr[i+1]){
                cout<<arr[i]<<"\n";
                break;
            }
        }    
    }
return 0;
}


//Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int Target) {
        int left = 0, right = size(nums)-1, mid, sol = size(nums);
        while(left <= right) {
            mid = (left + right)/2;
            if(nums[mid] < Target) 
                left = mid + 1;
            else right = mid - 1, sol = mid;
        }
        return sol;
    }
};