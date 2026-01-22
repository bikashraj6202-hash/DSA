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
    void solve2(TreeNode*temp,int &sum,int &c2){
        if(temp==NULL){
            return ;
        }
        c2++;
        sum+=temp->val;
        solve2(temp->left,sum,c2);
        solve2(temp->right,sum,c2);
    }
    
    void solve1(TreeNode*root,int &count){
        if(root==NULL){
            return ;
        }
        int sum=0;
        int c2=0;
        TreeNode*temp=root;
        solve2(temp,sum,c2);
        if(sum/c2==root->val){
            count++;
        }
        solve1(root->left,count);
        solve1(root->right,count);
    }

    
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        solve1(root,count);
        return count;
    }
};