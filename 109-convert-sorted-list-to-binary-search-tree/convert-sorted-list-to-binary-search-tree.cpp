/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode*solve(vector<int>ans){
        if(ans.size() == 0) return NULL;
        if(ans.size()==1){
            return new TreeNode(ans[0]);
        }
        int mid=ans.size()/2;
        TreeNode *root=new TreeNode(ans[mid]);
        vector<int>leftin(ans.begin(),ans.begin()+mid);
        vector<int>rightin(ans.begin()+mid+1,ans.end());

        root->left=solve(leftin);
        root->right=solve(rightin);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ans;
       
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        
        TreeNode* temp=solve(ans);
        return temp;
    }
};