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
    void solve(TreeNode* left,TreeNode* right,int lvl){
       if(!left || !right){
        return ;
       }
       if(lvl%2==1){
        swap(left->val,right->val);
       }
       solve(left->left,right->right,lvl+1);
       solve(right->left,left->right,lvl+1);
    }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        int lvl=1;
        if(root==NULL)return root;
        solve(root->left,root->right,lvl);
        return root;
    }
};