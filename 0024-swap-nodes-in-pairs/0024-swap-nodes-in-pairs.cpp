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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        while(temp2 != nullptr && temp1 != nullptr){
            swap(temp1->val, temp2->val);
            temp1 = temp2->next;
            if(temp1 != nullptr){
                temp2 = temp1->next;
            }else{
                temp2 = nullptr;
            }
        }
        return head;
    }
};