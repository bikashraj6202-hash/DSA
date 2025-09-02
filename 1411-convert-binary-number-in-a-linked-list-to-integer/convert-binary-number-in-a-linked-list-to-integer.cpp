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
    int getDecimalValue(ListNode* head) {
        if(head->val==0 && head->next==NULL){
            return 0;
        }
        vector<int>ans;
        ListNode*temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size();
        int sum=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            sum+=ans[i]*pow(2,i);
        }
        return sum;
    }
};