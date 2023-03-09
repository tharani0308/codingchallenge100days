//Design Circular Deque
//https://leetcode.com/problems/design-circular-deque/

class MyCircularDeque {
private:
    vector<int> sol;
    int head;
    int tail;
    int cnt;
    int len;
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        vector<int> tmp(k,-1);
        sol = tmp;
        head = 0;
        tail = 0;
        len = k;
        cnt = 0;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(cnt == len)
            return false;
        cnt++;
        int nh = (head + len - 1) % len;
        sol[nh] = value;
        head = nh;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(cnt == len)
            return false;
        cnt++;
        sol[tail] = value;
        tail = (tail+1)%len;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(cnt == 0)
            return false;
        cnt--;
        head = (head+1)%len;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(cnt == 0)
            return false;
        cnt--;
        tail = (tail -1 + len)%len;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(cnt == 0)
            return -1;
        return sol[head];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(cnt == 0)
            return -1;
        return sol[(tail-1+len)%len];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return cnt == 0;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return cnt == len;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque obj = new MyCircularDeque(k);
 * bool param_1 = obj.insertFront(value);
 * bool param_2 = obj.insertLast(value);
 * bool param_3 = obj.deleteFront();
 * bool param_4 = obj.deleteLast();
 * int param_5 = obj.getFront();
 * int param_6 = obj.getRear();
 * bool param_7 = obj.isEmpty();
 * bool param_8 = obj.isFull();
 */


//MAXIMUM SUM CIRCULAR SUBARRAY
//https://leetcode.com/problems/maximum-sum-circular-subarray/

class Solution {
public:
   int maxSubarraySumCircular(vector<int>& A) {
	if (A.empty()) return 0;

	int n = A.size();
	int sum = 0, ma = A[0], last_ma = 0, mi = A[0], last_mi = 0;
	for (int i = 0; i < n; i++) {
		sum += A[i];
		ma = max(ma, last_ma = A[i] + max(0, last_ma));
		mi = min(mi, last_mi = A[i] + min(0, last_mi));
	}
	return ma < 0 ? ma : max(ma, sum - mi);
}
};