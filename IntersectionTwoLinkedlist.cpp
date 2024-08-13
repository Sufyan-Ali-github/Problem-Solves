/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int length(ListNode *headA){
        int l=0;
        ListNode *temp=headA;
        while(temp != NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=length(headA);
        int l2=length(headB);
        int d=0;
        ListNode* Node1;
        ListNode* Node2;
        if(l1>l2){
            d=l1-l2;
            Node1=headA;
            Node2=headB;
        }else{
            d=l2-l1;
            Node1=headB;
            Node2=headA;

        }
        while(d){
            Node1=Node1->next;
            if(Node1 == NULL){
                return NULL;
            }
            d--;
        }

        while(Node1 != NULL && Node2 != NULL){
            if(Node1 == Node2){
                return Node1;
            }
            Node1=Node1->next;
            Node2=Node2->next;

        }
        return NULL;
        

    }
};