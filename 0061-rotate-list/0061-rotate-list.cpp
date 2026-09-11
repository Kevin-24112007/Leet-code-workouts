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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        struct ListNode* temp= head;
        int N = 0;
        while(temp != nullptr) {
            N++;
            temp = temp->next;
        }
        struct ListNode* t = head;
        k = k%N;
        if(k == 0) return head;
        int lim = N-k;
        for(int i = 0; i < lim-1; i++) {
            t = t->next;
        }
        struct ListNode* h1 = t->next;
        t->next = nullptr;
        struct ListNode* tail = h1;
        while(tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = head;
        head = h1;
        return head;
    }
};