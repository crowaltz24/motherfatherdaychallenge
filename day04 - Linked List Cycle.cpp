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
    bool hasCycle(ListNode *head) {
        ListNode* FastPointer = head;
        ListNode* SlowPointer = head;

        while (FastPointer != NULL && FastPointer->next != NULL){
            SlowPointer = SlowPointer->next;
            FastPointer = FastPointer->next->next;
            if (SlowPointer == FastPointer){
                return true;
            }
        }

        return false;
    }
};