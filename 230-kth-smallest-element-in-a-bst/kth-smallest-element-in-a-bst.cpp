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
int preorder(TreeNode *root,int &i,int k){
    if(root==NULL){
        return -1;
    } 
    int left=preorder(root->left,i,k);
    if(left!=-1){
        return left;
    }
    i++;
    if(i==k){
        return root->val;
    }
     return preorder(root->right,i,k);
}
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
        int ans=preorder(root,i,k);
        return ans;
    }
};