/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> freq;
        while(headA->next != NULL){
            freq[headA]++;
            headA = headA->next;
        }
        freq[headA]++;
        while(headB->next != NULL){
            if(freq[headB]) return headB;
            headB = headB->next;
        }
        if(freq[headB]) return headB;
        return nullptr;
    }
};