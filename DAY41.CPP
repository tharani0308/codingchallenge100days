//Next Greater Element I
//https://leetcode.com/problems/next-greater-element-i/


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res(nums1.size(),-1);
        stack<int> st;
        unordered_map<int, int> umap;
        for(int i=0; i<nums2.size(); i++)
        {
            int element = nums2[i];
            while(!st.empty() && element > st.top())
            {
                umap[st.top()] = element;
                st.pop();
            }
            st.push(element);
        }
        for(int i=0; i<nums1.size(); i++)
        {
            int ele = nums1[i];
            if(umap.find(ele) != umap.end())
            {
                int nge = umap[ele];
                res[i] = nge; //push NGE of desired element
            }       
        }
        return res;  
    }
};

//Implement Queue using stacks
//https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> stk1;
    stack<int> stk2;
    MyQueue() {  
    }

    void push(int x) {
        while(!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk2.push(x);
        while(!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }
    int pop() {
        int curr = stk1.top();
        stk1.pop();
        return curr;
    }
    int peek() {
        return stk1.top();
    }
    bool empty() {
        return stk1.empty();
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */