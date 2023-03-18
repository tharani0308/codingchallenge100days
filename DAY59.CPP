//PATH SUM
//https://leetcode.com/problems/path-sum/submissions/917564134/

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
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        if(root == NULL)
        {
            return false;
        }
        if(root->left == NULL && root->right == NULL && root->val - targetSum == 0)
        {
            return true;
        }
        
        bool left = hasPathSum(root->left,targetSum - root->val);
        bool right = hasPathSum(root->right,targetSum - root->val);
        
        return left || right;
    }
};

//FIND THE INDEX OF THE FIRST OCCURRENCE IN A STRING
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = needle.length(), b = haystack.length();

        for (int ws = 0; ws <= b - a; ws++) {
            for (int i = 0; i < a; i++) {
                if (needle[i] != haystack[ws + i]) {
                    break;
                }
                if (i == a - 1) {
                    return ws;
                }
            }
        }

        return -1;
    }
};