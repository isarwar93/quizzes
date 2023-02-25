#include <stdio.h>
#include <stdlib.h>
/* Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:

The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode 
 {
    int val;
    struct ListNode *next;
 };
struct ListNode* middleNode(struct ListNode* head)
{
    int i=0;
    struct ListNode * temp;
    temp = head;
    while(temp != NULL)
    {
        i++;
        temp = temp -> next;
    }
    temp = head;
    int j=1;
    if (i%2==0)
    {
        while(j != ((i/2)+1))
        {   
            j++;
            temp = temp -> next;
        }
        return temp;
    }
    else
    {   
        while(j != ((i+1)/2))
        {
            temp = temp -> next;
            j++;
        }
        return temp;
    }
}
print_linked_list(struct ListNode* x)
{
    struct ListNode* temp = x;
    printf("[");
    while(temp != NULL)
    {
        printf("%d, ",temp->val);
        temp = temp -> next;
    }  
    printf("]");  
}
int main()
{
    struct ListNode* head = NULL;
    struct ListNode* second = NULL;
    struct ListNode* third = NULL;
    struct ListNode* forth = NULL;
    struct ListNode* fifth = NULL;
    struct ListNode* sixth = NULL;
    struct ListNode* seventh = NULL;

    // allocate 3 nodes in the heap
    head = (struct ListNode*)malloc(sizeof(struct ListNode*));
    second = (struct ListNode*)malloc(sizeof(struct ListNode*));
    third = (struct ListNode*)malloc(sizeof(struct ListNode*));
    forth = (struct ListNode*)malloc(sizeof(struct ListNode*));
    fifth = (struct ListNode*)malloc(sizeof(struct ListNode*));
    sixth = (struct ListNode*)malloc(sizeof(struct ListNode*));
    seventh = (struct ListNode*)malloc(sizeof(struct ListNode*));
  
    head->val = 1; // assign data in first node
    head->next = second; // Link first node with second
  
    second->val = 2; // assign data to second node
    second->next = third;

    third->val = 3; // assign data in first node
    third->next = forth; // Link first node with second
  
    forth->val = 4; // assign data to second node
    forth->next = fifth;

    fifth->val = 5; // assign data in first node
    fifth->next = sixth; // Link first node with second
  
    sixth->val = 6; // assign data to second node
    sixth->next = seventh;
  
    seventh->val = 7; // assign data to third node
    seventh->next = NULL;

    print_linked_list(head);
    
}