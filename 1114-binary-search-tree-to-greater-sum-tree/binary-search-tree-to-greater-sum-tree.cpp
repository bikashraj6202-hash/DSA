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
    void solve(TreeNode *root,TreeNode*&ans,int &target){
        if(root==NULL){
            return;
        }
        solve(root->right,ans->right,target);
        ans->val=target+root->val;
        target=root->val;
        solve(root->left,ans->left,target);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* ans=root;
        int target=0;
        solve(root,ans,target);
        return ans;
        
    }
};