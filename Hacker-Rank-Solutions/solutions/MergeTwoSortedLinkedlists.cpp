/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    if(headA == NULL)   return headB;
    if(headB==NULL) return headA;
    
    Node *newNode,*temp;
    newNode=(Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    temp = newNode;
    while(headA != NULL && headB != NULL) {
        if(headA->data <= headB->data) {
            temp->next = headA;
            headA = headA->next;
            temp = temp->next;
        }else {
             temp->next = headB;
            headB = headB->next;
            temp = temp->next;
        }
    }
    if(headA != NULL)
        temp->next = headA;
    else 
           temp->next = headB;
    
    temp = newNode->next;
    free(newNode);
    return temp;
  // This is a "method-only" submission. 
  // You only need to complete this method 
}
