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
        ListNode* temp1=head;
        ListNode* temp3=head;
        int size=1;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(temp3->next!=NULL){
            temp3=temp3->next;
            size++;
        }
        k=k%size;
        if(k==0)
        return head;
        for(int i=0;i<size-k-1;i++){
            temp1=temp1->next;
        }
        ListNode* temp2=temp1->next;
        temp3->next=head;
        temp1->next=NULL;
        return temp2;
    }
};