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
    void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        vector<int>res;
        solve(root1,v1);
        solve(root2,v2);
        int i=0;
        int j=0;
        int n1=v1.size();
        int n2=v2.size();
        while(i<n1 && j<n2){
            if(v1[i]<v2[j]){
                res.push_back(v1[i]);
                i++;
            }
            else{
                res.push_back(v2[j]);
                j++;
            }
        }
        while(i<n1){
            res.push_back(v1[i]);
            i++;
        }
         while(j<n2){
            res.push_back(v2[j]);
            j++;
        }
        return res;
    }
};