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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode* curr=head;
        int pos=1;
        vector<ListNode*>even;
        vector<ListNode*>odd;
        while(curr!=NULL){
            if(pos%2==1) odd.push_back(curr);
            else even.push_back(curr);
            curr=curr->next;
            pos++;
        }
        for(int i=0;i<odd.size()-1;i++){
            odd[i]->next=odd[i+1];
        }
        for(int i=0;i<even.size()-1;i++){
            even[i]->next=even[i+1];
        }
        
        odd[odd.size()-1]->next=even[0];
        even[even.size()-1]->next=NULL;
        return odd[0];
    }
};