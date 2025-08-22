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
int findpos(vector<int>in,int element){
    for(int i=0;i<in.size();i++){
        if(in[i]==element){
            return i;
        
        }
    }
        return -1;
    
}
    TreeNode* solve(vector<int>preorder,vector<int>in,int &index,int instart,int inend,int n){
        //instart mean inordered start
        if(index>=n || instart>inend){
            return NULL;
        }
        int element=preorder[index++];
        TreeNode* root=new TreeNode(element);
        int pos=findpos(in,element);

        // recursive call for left;
        root->left=solve(preorder,in,index,instart,pos-1,n);
        root->right=solve(preorder,in,index,pos+1,inend,n);
        return root;


    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>in; // lNR because it is in sorted form;
        in=preorder;
        sort(in.begin(),in.end());
        int preindex=0;
        int n=preorder.size();
        TreeNode* ans=solve(preorder,in,preindex,0,n-1,n); // 0= start and n-1 end;
        return ans;
    }
};