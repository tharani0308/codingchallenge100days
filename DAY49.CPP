//Product of the Last K Numbers
//https://leetcode.com/problems/product-of-the-last-k-numbers/description/

class ProductOfNumbers {
public:
    vector<int> ans;
    int stop=-1,i=0;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            stop=i;
            ans.push_back(1);
            i++;
            return;
        }
        else
        {
            if(ans.size()==0)
                ans.push_back(num);
            else
                ans.push_back(num*ans[i-1]);
            i++;    
        }
    }
    
    int getProduct(int k) {
        int real=i-stop;
        if(k>=real)
            return 0;
        else
        {
            if(k==ans.size())
                return ans[ans.size()-1];
            else
                return (ans[ans.size()-1]/ans[ans.size()-k-1]);
        }
        
        
    }
};


//Design Front Middle Back Queue
//https://leetcode.com/problems/design-front-middle-back-queue/

/**class FrontMiddleBackQueue {
public:
    deque<int> list1;
    deque<int> list2;
    int size;
    
    FrontMiddleBackQueue() {
        size = 0;        
    }
    
    void pushFront(int val) {
        
        if(list1.size()- list2.size() == 0)
        {
            list1.push_front(val);
        }
        else
        {
            list1.push_front(val);
            list2.push_front(list1.back());
            list1.pop_back();
        }
        
        size++;
    }
    
    void pushMiddle(int val) {
        
        if(list1.size() - list2.size() == 0)
        {
            list1.push_back(val);
        }
        else
        {
            list2.push_front(list1.back());
            list1.pop_back();
            list1.push_back(val);
        }
        
        size++;
    }
    
    void pushBack(int val) {
            
        if(list1.size() - list2.size() == 0)
        {
            list2.push_back(val);
            list1.push_back(list2.front());
            list2.pop_front();
        }
        else
        {
            list2.push_back(val);
        }
        
        size++;
    }
    
    int popFront() {

        if(size ==0) return -1;
        
        int val = list1.front();
        list1.pop_front();
        
        if(list1.size()<list2.size())
        {
            list1.push_back(list2.front());
            list2.pop_front();
        }
        
        size--;
        return val;
    }
    
    int popMiddle() {
        
        if(size ==0) return -1;
        
        int val = list1.back();
        list1.pop_back();

        if(list1.size() < list2.size())
        {
            list1.push_back(list2.front());
            list2.pop_front();
        }
        
        size--;
        return val;
        
    }
    
    int popBack() {
        
        if(size ==0) return -1;
        
        int val;
        if(size==1)
        {
            val = list1.front();
            list1.pop_front();
        }
        else
        {
            val = list2.back();
            list2.pop_back();

            int s1 = list1.size();
            int s2 = list2.size();

            if(list1.size() - list2.size() > 1)
            {
                list2.push_front(list1.back());
                list1.pop_back();
            }                   
        }
        
        size--;
        return val;       
    }
};
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */


