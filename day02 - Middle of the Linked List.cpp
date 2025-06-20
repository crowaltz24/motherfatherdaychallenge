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
        ListNode* middleNode(ListNode* head) {
            ListNode* a = head;
            ListNode* b = head;
    
            while (b != NULL && b->next != NULL){
                a = a->next;
                b = b->next->next;
            }
            return a;
        }
    };