//Remove Nodes Frome Linked List 
//https://leetcode.com/problems/remove-nodes-from-linked-list/

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
    ListNode* reverse(ListNode* tmp)
    {
         ListNode *prev=NULL,*nxt=tmp;
         while(tmp)
          {
            nxt=tmp->next;
            tmp->next=prev;
            prev=tmp;
            tmp=nxt;
          }
        
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) 
    {
        ListNode* tmp=head;
        ListNode* node = new ListNode(0);
        ListNode* ans=node;
        
        tmp=reverse(tmp);
        int mx=tmp->val;
        while(tmp)
        {
           mx=max(mx,tmp->val);
            
            if(tmp->val>=mx)
            {
               ListNode* n=new ListNode(tmp->val);
               node->next=n;
                node=node->next;
            }
            tmp=tmp->next;
        }

       tmp=reverse(ans->next);
        return tmp;
    }
    
};

//Elimination Game 
//https://leetcode.com/problems/elimination-game/

class Solution {
public:
    int lastRemaining(int n) {
        return recursion(n, true);
    }
    int recursion(int n, bool isLeft) {
        if(n == 1) return n;
        if(!isLeft && (n % 2) == 0) 
            return recursion(n / 2, !isLeft) * 2 - 1;
        else {
            return recursion(n / 2, !isLeft) * 2;
        }
    }
};
