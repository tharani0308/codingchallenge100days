//Convert Binary Number in a Linked List
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {
        int result=0;
        while(head)
        {
            result<<=1;
            result|=head->val;
            head=head->next;
        }
        return result;
    }
};

//Design Hashmap 
//https://leetcode.com/problems/design-hashmap/

class MyHashMap {
public:
    int SIZE; 
    vector<list<pair<int,int>>>table;
    MyHashMap(){
        SIZE=1000;
        table.resize(SIZE);
    }
    int hash(int key){
        return key%SIZE;
    }
    list<pair<int,int>> :: iterator  search(int key){
        int i=hash(key);
        list<pair<int,int>>:: iterator  itr=table[i].begin(); 
        while (itr !=table[i].end()){
            if(itr->first==key){
                return itr;
            }
            itr++;
        }
        return itr;
    }
    
    void put(int key, int value) {
        int i=hash(key);
        remove(key);
        table[i].push_back({key,value});
    }
    
    int get(int key) {
        int i=hash(key);
        list<pair<int,int>> ::iterator itr=search(key);
        if(itr==table[i].end()){
            return -1;
        }else{
            return itr->second;
        }
    }
    
    void remove(int key) {
        int i=hash(key);
        list<pair<int,int>>:: iterator itr=search(key);
        if(itr!=table[i].end()){
            table[i].erase(itr);
        }
    }
};
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */