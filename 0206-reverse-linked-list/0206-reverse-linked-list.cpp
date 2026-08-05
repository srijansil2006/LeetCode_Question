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
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp = head;
        ListNode* prv = nullptr;
        while(tmp!=nullptr){
            ListNode* nxt = tmp->next;
            tmp->next = prv;
            prv = tmp;
            tmp = nxt;
        }
        return prv;
    }
};