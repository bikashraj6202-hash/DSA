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
ListNode* mergetwolists(ListNode* list1, ListNode* list2) {
       ListNode* dummyNode = new ListNode(-1); //initialization of dummy
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* temp = dummyNode;

        while(curr1 && curr2) {
            if(curr1->val < curr2->val) {
                temp->next = curr1;
                temp = curr1;
                curr1 = curr1->next;
            }
            else {
                temp->next = curr2;
                temp = curr2;
                curr2 = curr2->next;
            }
        }
        if(curr1) temp->next = curr1;
        if(curr2) temp->next = curr2;
        return dummyNode->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        // base case 
        if(n==0)return nullptr;
        ListNode*temp=NULL;
        temp=lists[0];
       
        for(int i=1;i<n;i++){
            temp=mergetwolists(temp,lists[i]);
                
            }
        return temp;
        }
    
};