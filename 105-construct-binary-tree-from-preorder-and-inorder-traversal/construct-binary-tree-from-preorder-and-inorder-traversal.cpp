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
int index=0;
    
    TreeNode* solve(vector<int>&pre,vector<int>&in,int start,int end){
        if(start>end){
            return NULL;
        }
        TreeNode* root=new TreeNode(pre[index]);
        index++;
        int mid=start;
        while(in[mid]!=root->val){
            mid++;
        }

        root->left=solve(pre,in,start,mid-1);
        root->right=solve(pre,in,mid+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=in.size()-1;
        TreeNode* root=solve(pre,in,0,n);
        return root;
    }
};