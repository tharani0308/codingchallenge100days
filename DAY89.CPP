//X of a Kind in a Deck of Cards
//https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> frequency;
        for(int i=0; i<deck.size(); i++){
            frequency[deck[i]]++;
        }
        int gca=frequency[deck[0]];
        for(auto value:frequency){
            gca=gcd(gca,value.second);
        }
        return gca>=2;
    }
};

//Subtree of Another Tree
//https://leetcode.com/problems/subtree-of-another-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* p, TreeNode* q)
    {
        if(p== NULL && q== NULL)
        {
            return true;
        }
        if(p== NULL || q== NULL)
        {
            return false;
        }
        if(p->val!= q->val)
        {
            return false;
        }
        return (solve(p->left, q->left) && solve(p->right, q->right));
    }
        
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        if(root== NULL && subRoot== NULL)
        {
            return true;
        }
        if(root== NULL || subRoot== NULL)
        {
            return false;
        }
        return (solve(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
};
  