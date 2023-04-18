//Intersection of two arrays II
//https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=max(nums1.size(),nums2.size());
        vector<int>arr;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int x=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=x;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    arr.push_back(nums1[i]);
                    x=j+1;
                    break;
                }
            }
        }
        return arr;
    }
};

//Relative Ranks
//https://leetcode.com/problems/relative-ranks/



class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& scores) {
        int size = scores.size();
        int count = size;
        map<int, int> m;
        vector<string> res(size);
        string gold = "Gold Medal";
        string silver = "Silver Medal";
        string bronze = "Bronze Medal";

        for (int i = 0; i < size; i++) m[scores[i]] = i;
        for (auto [key, value] : m) {
            if (count == 1) res[value] = gold;
            else if (count == 2) res[value] = silver;
            else if (count == 3) res[value] = bronze;
            else res[value] = std::to_string(count);
            count--;
        }
        return res;
    }
};