/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    /*if(headA == NULL && headB == NULL)  return 1;
    else    return 0;
    */
    Node *temp1=headA, *temp2 = headB;
    
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data != temp2->data) {
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1!=NULL || temp2!=NULL)  return 0;
    return 1;
  // This is a "method-only" submission. 
  // You only need to complete this method 
}
