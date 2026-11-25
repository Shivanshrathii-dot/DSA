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
    ListNode* mergetwolists(ListNode* l1, ListNode* l2){
        if(l1==NULL || l2==NULL){
            return l1==NULL ? l2:l1;
        }
        if(l1->val<=l2->val){
            l1->next=mergetwolists(l1->next,l2);
            return l1;
        }else{
            l2->next=mergetwolists(l1,l2->next);
            return l2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }
        ListNode*ans=lists[0];
        for(int i=1;i<lists.size();i++){
            ans=mergetwolists(ans,lists[i]);
        }
        return ans;
        
    }
};