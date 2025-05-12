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
            if (head==NULL || head->next==NULL || k == 0) return head;
    
            int l = 1;
            ListNode* tail = head;
            while (tail->next){
                l++;
                tail = tail->next;
            }
    
            k = k % l;
            if (k==0) return head;
    
            int turn = l-k;
            ListNode* curr = head;
            for (int i=1; i<turn; i++){
                curr = curr->next;
            }
    
            ListNode* res = curr->next;
            curr->next = NULL;
            tail->next = head;
    
            return res;
        }
    };