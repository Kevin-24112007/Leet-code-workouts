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
    ListNode* temp;
    bool palindrome;

    void iterate(ListNode* slow,ListNode* fast){
        if(fast->next != NULL && fast->next->next != NULL) iterate(slow->next,fast->next->next);
        else if(fast->next == NULL){
            temp = slow->next;
            return;
        }
        else temp = slow->next;
        palindrome = palindrome & (slow->val == temp->val);
        if(palindrome == false) return;
        temp = temp->next;
    }

    bool isPalindrome(ListNode* head) {
        palindrome = true;
        iterate(head,head);
        return palindrome;
    }
};