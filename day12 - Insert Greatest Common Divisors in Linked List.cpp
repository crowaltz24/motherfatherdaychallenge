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
    int gcd(int a, int b){
        while (b>0){
            int temp = b;
            b = a%b;
            a = temp;
        }

        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr->next){
            int a = curr->val;
            int b = curr->next->val;
            curr->next = new ListNode(gcd(a,b), curr->next);
            curr = curr->next->next;
        }

        return head;
    }
};