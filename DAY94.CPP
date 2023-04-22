//SYMMETRIC TREE
//https://leetcode.com/problems/symmetric-tree/description/


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
bool solve(TreeNode* r1, TreeNode* r2){
        if(r1 == NULL && r2 == NULL)return true;
        else if(r1 == NULL || r2 == NULL)return false;
        if(r1->val == r2->val){
            return solve(r1->left,r2->right)&&solve(r1->right,r2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode *root) {
        return solve(root, root);
    }
};

//BINARY TREE INORDER TRAVERSAL
//https://leetcode.com/problems/binary-tree-inorder-traversal/


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
    void inorder(TreeNode* root, vector<int> &vct){
        if(root == NULL){
            return;
        }

        inorder(root->left,vct);
        vct.push_back(root->val);
        inorder(root->right,vct);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vct;
        inorder(root,vct);
        return vct;
    }
};