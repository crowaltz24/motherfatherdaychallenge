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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallList = new ListNode(0, nullptr);
        ListNode* bigList = new ListNode(0, nullptr);
        ListNode* small = smallList;
        ListNode* big = bigList;

        while (head != nullptr) {
            if (head->val < x) {
                small->next = head;
                small = small->next;
            } else {
                big->next = head;
                big = big->next;
            }
            head = head->next;
        }

        small->next = bigList->next;
        big->next = nullptr;

        ListNode* res = smallList->next;
        delete smallList;
        delete bigList;
        return res;     
    }
};