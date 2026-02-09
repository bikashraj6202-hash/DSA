class compare {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, compare> minheap;

        int k = lists.size();
        if (k == 0) return NULL;

        // push first node of each list
        for (int i = 0; i < k; i++) {
            if (lists[i] != NULL) {
                minheap.push(lists[i]);
            }
        }

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (!minheap.empty()) {
            ListNode* top = minheap.top();
            minheap.pop();

            // push next node of the same list
            if (top->next != NULL) {
                minheap.push(top->next);
            }

            // add to result list
            if (head == NULL) {
                head = top;
                tail = top;
            } else {
                tail->next = top;
                tail = top;
            }
        }

        return head;
    }
};
