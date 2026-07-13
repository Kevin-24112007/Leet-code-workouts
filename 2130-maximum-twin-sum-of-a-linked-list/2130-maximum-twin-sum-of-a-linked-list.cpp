/**
 * Definition for singly-linked list.
 * struct ListNode {8
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int max_pair;
    ListNode* temp;

    void iterate(ListNode* slow,ListNode* fast){
        if(fast->next->next != NULL) iterate(slow->next,fast->next->next);
        else temp = slow->next;
        max_pair = max(max_pair,slow->val+temp->val);
        temp = temp->next;
    }

    int pairSum(ListNode* head) {
        max_pair = head->val;
        iterate(head,head);
        return max_pair;
    }
};