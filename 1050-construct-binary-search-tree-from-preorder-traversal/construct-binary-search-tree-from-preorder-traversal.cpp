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

    TreeNode*solve(vector<int>&pre,int mini,int maxi,int &i){
        // base case
        if(i>=pre.size()){
            return NULL;
        }
        // 2nd condition yadi range me nho 
        if(pre[i]<mini || pre[i]>maxi){
            return NULL;
        }
        TreeNode* root=new TreeNode(pre[i++]);

        root->left=solve(pre,mini,root->val,i);
        root->right=solve(pre,root->val,maxi,i);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int i=0;
        TreeNode* ans=solve(pre,mini,maxi,i);
        return ans;
    }
};