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

    int maxi(int start,int end,vector<int>&nums){
        int index=start;
        for(int i=start;i<=end;i++){
            if(nums[index]<nums[i]){
                index=i;
            }
        }
        return index;
    }

    TreeNode* solve(int start,int end,vector<int>&nums){
        if(start>end){
            return nullptr;
        }
        TreeNode* root=new TreeNode(nums[maxi(start,end,nums)]);
        root->left=solve(start,maxi(start,end,nums)-1,nums);
         root->right=solve(maxi(start,end,nums)+1,end,nums);
         return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        return solve(start,end,nums);  
    }
};