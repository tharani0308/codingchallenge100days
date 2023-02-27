//BASIC CALCULATOR
//https://leetcode.com/problems/basic-calculator/description/

class Solution {
public:
    int calculate(string s) {
       
        int n = s.length();
        stack<int> stk ;
        int res = 0;
        int sign = 1;
        
        for(int i = 0 ; i < n ; i++){
            
            if(s[i] == '+')
                sign = 1;
            else if(s[i] == '-')
                sign = -1;
            else if(isdigit(s[i])){
                long long temp = 0;
                
                while(i < n and isdigit(s[i])){
                    temp = temp*10 + s[i] - '0';
                    i++;
                }
                i--;
                res = res + sign*temp;
            }
            else if(s[i] == '('){
                stk.push(res);
                stk.push(sign);
                res = 0;
                sign = 1;
            }
            else if(s[i] == ')'){
                int curr_sign = stk.top(); stk.pop();
                int curr_val = stk.top(); stk.pop();
                
                res = curr_val + curr_sign * res;
            }
        }
        return res;
    }
};



//BINARY TREE PREORDER TRAVERSAL
//https://leetcode.com/problems/binary-tree-preorder-traversal/

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> node;
        stack<TreeNode*> todo;
        while (root || !todo.empty()) {
            if (root) {
                node.push_back(root -> val);
                if (root -> right) {
                    todo.push(root -> right);
                }
                root = root -> left;
            } else {
                root = todo.top();
                todo.pop();
            }
        }
        return node;
    }
};