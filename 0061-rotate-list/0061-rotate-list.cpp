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

    int count_len(ListNode* head){
        int c = 1;
        while(head !=NULL && head->next != NULL){
            c++;
            head = head->next;
        }
        return c;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        
        int count = count_len(head);
        if(count <= 1) return head;
        k = k%count;
        k = count-k-1;
        ListNode* temp = head, *temp_h = head, *temp_head;
        while(k--){
            temp = temp->next;
        }
        temp_head = temp->next;
        temp->next = NULL;
        head = temp_head;
        while(temp_head!=NULL && temp_head->next != NULL){
            temp_head = temp_head->next;
        }
        if (temp_head!=NULL) temp_head->next = temp_h;
        if (head!=NULL) return head;
        else return temp_h;
    }
};