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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* curr=temp->next;
            while(curr!=NULL){
                if(temp->val>curr->val){
                    int swap=temp->val;
                    temp->val=curr->val;
                    curr->val=swap;
                }
                curr=curr->next;
            }
            temp=temp->next;
        }
        return head;
        
    }
};