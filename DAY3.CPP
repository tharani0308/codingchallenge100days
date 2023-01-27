//CANDIES
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int b=1;
	    int d=0;
	    int c[2*a]; 
	    for(int i=0;i<2*a;i++){
	        cin>>c[i];
	    }
	    for(int i=0;i<2*a;i++){
	        b=1;
	        for(int j=i+1;j<=2*a;j++){
	            if(c[i]==c[j]){
	                b++;
	            }
	            if(b==3){
	                d++;
	            }
	        }
	    }
	    if(d>1){
	     cout<<"NO"<<endl;
	    }
	     else{
	      cout<<"YES"<<endl;
	     } 
	    
	}
	return 0;
}


//ADD TWO NUMBERS
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newnode=new ListNode();
        ListNode* duplicate1=newnode;
        int a=0;
        
        while(l1!=NULL || l2!=NULL || a){
        int sum=0;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        sum+=a;
        a=sum/10;
        ListNode* newnode1=new ListNode(sum%10);
        duplicate1->next=newnode1;
        duplicate1=duplicate1->next;
    }
    return newnode->next;
    }
};