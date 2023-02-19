//Merge k sorted lists 
//https://leetcode.com/problems/merge-k-sorted-lists/

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size(); 
        if(k == 0) 
            return NULL; 
        
        vector<pair<int, ListNode*>> arr; 
        
        for(int i = 0; i < k; i++) 
        {
            ListNode* curr_list = lists[i]; 
            
            while(curr_list != NULL) 
            {
                arr.push_back({curr_list -> val, curr_list}); 
                curr_list = curr_list -> next;
            }
        }
        
            if(arr.size() == 0) 
            return NULL;
        
        sort(arr.begin(), arr.end()); 
        
        
        for(int i = 0; i < arr.size() - 1; i++)
        {
            arr[i].second -> next = arr[i + 1].second;
        }
        
        
        arr[arr.size() - 1].second -> next = NULL;
        
        return arr[0].second; 
    }
};




//REMOVE NTH NODE FROM THE SORTED LINKED LISTS
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/901084713/

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
class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode** t1 = &head, *t2 = head;
        for(int i = 1; i < n; ++i)
        {
            t2 = t2->next;
        }
        while(t2->next != NULL)
        {
            t1 = &((*t1)->next);
            t2 = t2->next;
        }
        *t1 = (*t1)->next;
        return head;
    }
};