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

int solve(TreeNode*root,unordered_map<TreeNode*,int>&child){
    if(root==NULL){
        return 0;
    }
    if(child.find(root)!=child.end()){
        return child[root];
    }
    int pick=root->val;
    if(root->left){
     pick+=solve(root->left->left,child)+solve(root->left->right,child);
    }
    if(root->right){
        pick+=solve(root->right->left,child)+solve(root->right->right,child);
    }
    int notpick=solve(root->right,child)+solve(root->left,child);
    int a= max(pick,notpick);
    child.insert({root,a});
    return a;
}
    int rob(TreeNode* root) {
        unordered_map<TreeNode*,int>child;
        int a=solve(root,child);
        return a;
    }
};