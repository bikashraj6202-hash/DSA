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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int> > result;
     map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int ,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            pair<TreeNode*,pair<int ,int>>temp=q.front();
            q.pop();
            TreeNode* frontend=temp.first;
            int hd=temp.second.first;
            int lv=temp.second.second;
            nodes[hd][lv].insert(frontend->val);

        
        if(frontend->left){
            q.push({frontend->left,{hd-1,lv+1}});
        }
         if(frontend->right){
            q.push({frontend->right,{hd+1,lv+1} });
        }

        }
        for(auto it: nodes){  
            vector<int>ans;
            for(auto j:it.second){
              
                for(auto  k:j.second){
                    ans.push_back(k);
                }
              
            }  result.push_back(ans);
        }
        return result;
    }
};