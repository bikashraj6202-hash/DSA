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

    void solve(TreeNode* root,vector<int>&res,int ans){
        //base case
        if(root==NULL)return ;
        ans=ans*10+ root->val; 
        if(root->left==NULL && root->right==NULL){
            res.push_back(ans);
            ans=ans-root->val;
            return;
        }
        solve(root->left,res,ans);
        solve(root->right,res,ans);
    }
    
    int sumNumbers(TreeNode* root) {
        vector<int>res;
        solve(root,res,0);
        int n=res.size();
         double sum=0;
        for(int i=0;i<n;i++){
            sum+=res[i];
        }
        return sum;

    }
};