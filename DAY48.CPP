//DESIGN CIRCULAR TICKETS
//https://leetcode.com/problems/design-circular-queue/

class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        data.resize(k);
        maxSize = k;
    }
    bool enQueue(int val) {
        if (isFull()) return false;
        last = (last + 1) % maxSize;
        data[last] = val;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) return false;
        if (first == last) first = 0, last = -1;
        else first = (first + 1) % maxSize;
        return true;
    }
    int Front() {
        return isEmpty() ? -1 : data[first];
    }
    int Rear() {
        return isEmpty() ? -1 : data[last];
    }
    bool isEmpty() {
        return last == -1;
    }
    bool isFull() {
        return !isEmpty() && (last + 1) % maxSize == first;
    }
private:
    int maxSize, first = 0, last = -1;
    vector<int> data;
};


//TIME NEEDED TO BUY TICKETS
//class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        data.resize(k);
        maxSize = k;
    }
    bool enQueue(int val) {
        if (isFull()) return false;
        last = (last + 1) % maxSize;
        data[last] = val;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) return false;
        if (first == last) first = 0, last = -1;
        else first = (first + 1) % maxSize;
        return true;
    }
    int Front() {
        return isEmpty() ? -1 : data[first];
    }
    int Rear() {
        return isEmpty() ? -1 : data[last];
    }
    bool isEmpty() {
        return last == -1;
    }
    bool isFull() {
        return !isEmpty() && (last + 1) % maxSize == first;
    }
private:
    int maxSize, first = 0, last = -1;
    vector<int> data;
};

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int pass=0;
        while(1){
            for(int i=0;i<tickets.size(); ++i){
                if (tickets[i] == 0) continue;
                tickets[i]--;
                ++pass;
                if (tickets[k]==0) return pass;
            }
        }
    }
};