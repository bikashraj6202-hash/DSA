/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solve(TreeNode* cloned, TreeNode* target,TreeNode* &res){
        if(cloned==NULL){
            return ;
        }
        if(cloned->val==target->val){
            res=cloned;
            return;
        }
        solve(cloned->left,target,res);
        solve(cloned->right,target,res);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode*res;
        solve(cloned,target,res);
        return res;
    }
};