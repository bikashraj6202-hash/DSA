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
 vector<int>ans;
        int val=INT_MIN;
        int freq=0;
        int maxfreq=0;
void inorder(TreeNode *root ){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    if(val==root->val){
        freq++;
    }
    else{
        val=root->val;
        freq=1;
    }
    if(freq>maxfreq){
        maxfreq=freq;
        ans.clear();// clear all value that required
     ans.push_back(root->val);
    }
    else if(freq==maxfreq){ // yadi same frequency hue to push to karna padegana meri jaan
        ans.push_back(root->val);
    }
    inorder(root->right);
}
    vector<int> findMode(TreeNode* root) {
       
        inorder(root);
        return ans;
    }
};