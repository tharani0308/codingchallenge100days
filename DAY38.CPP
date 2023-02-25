//Design Hashset
//https://leetcode.com/problems/design-hashset/


class MyHashSet {
public:
        vector<bool> setarray;
    MyHashSet() {
        setarray.resize(1e6+1);
    }
    
    void add(int key) {
        setarray[key]=true;
    }
    
    void remove(int key) {
        setarray[key]=false;
    }
    
    bool contains(int key) {
        return setarray[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */


//Merge Sorted Array
//https://leetcode.com/problems/design-hashset/


class Solution {
public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
    }
};