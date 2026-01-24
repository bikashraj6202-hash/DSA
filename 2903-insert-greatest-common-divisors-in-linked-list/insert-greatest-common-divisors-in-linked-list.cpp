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
class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        vector<int>ans;

        if(temp->next==NULL){
        return temp;
        }
        while(temp->next){
        ans.push_back(temp->val);
        ans.push_back(gcd(temp->val,temp->next->val));
        temp=temp->next;
        }
        ans.push_back(temp->val);
       int n=ans.size();
       ListNode* res=new ListNode(ans[0]);
       ListNode* curr=res;
       for(int i=1;i<n;i++){
        curr->next=new ListNode(ans[i]);
        curr= curr->next;
       }
       return res;
    }
};