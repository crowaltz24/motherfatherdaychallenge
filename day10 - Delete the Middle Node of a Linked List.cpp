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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode* FastPointer = head;
        ListNode* SlowPointer = head;
        ListNode* prev = head;

        while (FastPointer != NULL && FastPointer->next != NULL){
            prev = SlowPointer;
            SlowPointer = SlowPointer->next;
            FastPointer = FastPointer->next->next;
        }

        if (prev){
            prev->next = SlowPointer->next;
        }

        return head;
    }
};