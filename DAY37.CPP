//Intersection of Two Linked Lists
//https://leetcode.com/problems/intersection-of-two-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp;
        while(headA)
        {
            temp = headB;
            while(temp)
            {
                if(headA==temp) return headA;
                temp=temp->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};

//Middle of the Linked List 
//https://leetcode.com/problems/middle-of-the-linked-list/

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
       ListNode* middleNode(ListNode* head) 
    {
        if(head == NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
	}
};