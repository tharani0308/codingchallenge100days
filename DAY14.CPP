//NEXT PERMUTATION
class Solution {
public:
    void nextPermutation(vector<int> &num) 
    {
        if (num.empty()) 
        return;
        int a;
        for (a = num.size()-2; a >= 0; --a)
        {
            if (num[a] < num[a+1]) break;
        }
        reverse(begin(num)+a+1, end(num));
        if (a == -1) return;
        auto itr = upper_bound(begin(num)+a+1, end(num), num[a]);
        swap(num[a], *itr);
    }
};