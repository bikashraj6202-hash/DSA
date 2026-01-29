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

    TreeNode* solve(vector<int>&in,vector<int>&postorder,int start,int end,int &index){
        if(start>end){
            return NULL;
        }
        TreeNode* root=new TreeNode(postorder[index]);
        index--;
        int mid=start;
        while(in[mid]!=root->val){
            mid++;
        }
        root->right=solve(in,postorder,mid+1,end,index);
        root->left=solve(in,postorder,start,mid-1,index);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index=inorder.size()-1;
        TreeNode* root=solve(inorder,postorder,0,inorder.size()-1,index);
        return root;
    }
};