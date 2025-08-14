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
pair<int,int>diafast(TreeNode *node){
    // base case
    if(node==NULL){
        pair<int,int>p(0,0);
        return p;
}
pair<int,int>left=diafast(node->left);
pair<int,int>right=diafast(node->right);

int op1=left.first;
int op2=right.first;
int op3=left.second+right.second;

pair<int,int>ans;
ans.first=max(op1,max(op2,op3));
ans.second=max(left.second,right.second)+1;
return ans;
}


int diameterOfBinaryTree(TreeNode *root){
    return diafast(root).first;
}   





};