/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
          // we solve through method of queue
      if(root==NULL){
        return root;
      }
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
       int n=q.size();
       for(int i=0;i<n;i++){
        Node* newp=q.front();
        q.pop();
        if(i==n-1 || q.empty()) newp->next=NULL;
        else{newp->next=q.front();
        }
        if(newp->left) q.push(newp->left);
        if(newp->right)q.push(newp->right);


       }
      }
      return root;
      
        
    }
};