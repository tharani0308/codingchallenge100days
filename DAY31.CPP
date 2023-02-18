//Merge Two Sorted Lists
//https://leetcode.com/problems/merge-two-sorted-lists/submissions/900350074/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head;
        ListNode* ptr;
        ListNode* cnnctr;
        vector<int> vec;
        while(list1) {
            vec.push_back(list1->val);
            list1=list1->next;
        }
        while(list2) {
            vec.push_back(list2->val);
            list2=list2->next;
        }
        sort(vec.begin(),vec.end());
        for(int i=0; i<vec.size(); i++) {
            ptr=new ListNode();
            ptr->val=vec[i];
            if(i==0) {
                head=ptr;
                cnnctr=head;
            }
            else {
                cnnctr->next=ptr;
                cnnctr=cnnctr->next;
            }
        }
        return head;
    }
};


//Remove Duplicates from sorted linked lists
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/900345287/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=head;
        ListNode *prev=NULL;
        if(head==NULL||head->next==NULL)
        return head;
        else
        {
            prev=head;
            p=prev->next;
        }
        while(1)
        {
            if(prev->val==p->val)
            {
                if(p->next==NULL)
                {prev->next=NULL;break;}
                prev->next=p->next;}
            else
            {
            prev=p;
            if(p->next==NULL)
            break; 
            } 
            p=p->next;
        }
     return head;   
    }
};


//Practice makes us perfect
//https://www.codechef.com/problems/PRACTICEPERF?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[4];
	int count=0;
	for(int i=0;i<4;i++)
	{
	    cin>>arr[i];
	    if(arr[i]>=10)
	    {
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}


