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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(isBalanced(root->left)==false){
            return false;
        }
        if(isBalanced(root->right)==false){
            return false;
        }
        int left = height(root->left);
        int right = height(root->right);

        if(abs(left-right) <=1){
            return true;
        }else{
            return false;
        }
        
    }
    int height(TreeNode* root){
        if(!root) return 0;
        int lt = height(root->left);
        int rt = height(root->right);

        return 1 + max(lt,rt);
    }
};
