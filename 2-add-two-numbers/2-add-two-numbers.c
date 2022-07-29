/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    //creation of l3
    struct ListNode* l3= (struct ListNode*)malloc(sizeof(struct ListNode));
    l3->next=NULL;
    struct ListNode* head=l3;
    struct ListNode* temp=NULL;
    int carry=0;
    
    //till any node becomes null
    while(l1 && l2)
    {
        l3->val=(l1->val+l2->val+carry)%10;
        carry=(l1->val+l2->val+carry)/10;
        printf("%d",l3->val);
        l3->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp=l3;
        l3=l3->next;
        l1=l1->next;
        l2=l2->next;
    }
    
    //if first list is longer
    while(l1)
    {
        l3->val=(l1->val+carry)%10;
        carry=(l1->val+carry)/10;
        l1=l1->next;
        l3->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp=l3;
        l3=l3->next;
        
    }
    //if second list is longer
    while(l2)
    {
        l3->val=(l2->val+carry)%10;
        carry=(l2->val+carry)/10;
        l2=l2->next;
        l3->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp=l3;
        l3=l3->next;
        
    }
    if(l1==NULL && l2==NULL)
    {
        temp->next=NULL;
    }
    
    //if extra carry remains
    if(carry>0)
    {
        temp->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp=temp->next;
        temp->val=carry;
        temp->next=NULL;
        
    }
    
    return head;
    
}