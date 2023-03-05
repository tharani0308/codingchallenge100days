//IMPLEMENTATION OF STACK USING QUEUES
//https://leetcode.com/problems/implement-stack-using-queues/


class MyStack {
public:
    /** Initialization of data structure */
    queue<int> q1;
    queue<int> q2;
    MyStack() {    
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());    q1.pop();
        }
        swap(q1, q2);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int result = top();
        q1.pop();
        return result;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

//FIRST UNIQUE CHARACTER IN A STRING 
//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char& c : s) {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) return i;
        }
        return -1;
    }
};