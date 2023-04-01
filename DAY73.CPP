//BINARY TREE PATHS
//https://leetcode.com/problems/binary-tree-paths/

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
    
    void TreePaths(TreeNode* root, string path, vector<string> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            path += to_string(root->val);
            ans.push_back(path);
            return;
            
        }
        path += (to_string(root->val)) + "->";
        TreePaths(root->left,path,ans);
        TreePaths(root->right,path,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> ans;
        TreePaths(root,"", ans);
        
        return ans;
        
    }
};

//EXCEL SHEET COLUMN NUMBER
//https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(int i=0;i<s.size();i++){
            result = result*26 + (s[i] - 'A' + 1);
        }
        return result;
    }
};