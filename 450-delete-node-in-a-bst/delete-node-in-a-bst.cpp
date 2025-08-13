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
 TreeNode *minival(TreeNode *root){
    TreeNode* temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp;
 }
    TreeNode* deleteNode(TreeNode* root, int key) {
        // base case 
        if(root==NULL){
            return root;
        }
        if(root->val==key){
            // if i have 0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            } 
            // if 1 child exis
            if(root->left!=NULL && root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;

            }
            if(root->left==NULL && root->right!=NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
 /// yaha start sabse bada case if two child exis;
 // isko two way mebanao 
// yaa to leftse max ya to right se minimum utha lo aur replace  kar do
if(root->left!=NULL && root->right!=NULL){
    int mini= minival(root->right)->val;
    root->val=mini;
    root->right=deleteNode(root->right,mini);
    return root;
}
 }
 else if(root->val<key){
    root->right=deleteNode(root->right,key);
    return root;
 }
 else{
    root->left=deleteNode(root->left,key);
    return root;
 }
 
        return root;
    }
    
};