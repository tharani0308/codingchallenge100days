//Rotate list
//https://leetcode.com/problems/rotate-list/submissions/902335870/

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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head, *ptr = head;
        if(head == NULL)
            return NULL;
        if(head -> next == NULL)
            return head;
        int cnt = 1;
        while(temp->next != NULL)
        {
            temp = temp -> next;
            cnt++;
        }
        k = k % cnt;        
        while(k--)
        {
            while(temp->next != NULL)
                temp = temp -> next;
        
            temp -> next = head;           
            head = temp;
            ptr = temp;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            temp -> next = NULL;
            temp = ptr;     
        }
        return head;
    }
};


//Swap Node in Pairs
//https://leetcode.com/problems/swap-nodes-in-pairs/submissions/902321199/

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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL) 
        {
            return head;
        }    
        ListNode* dummy; 
        dummy = head->next; 
        head->next = swapPairs(head->next->next); 
        dummy->next = head; 
        return dummy; 
    }
};

