/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *temp = head,*temp2;
    while(temp->next!=NULL) {
        if(temp->data == temp->next->data) {
            temp2=temp->next;
            temp->next = temp2->next;
            free(temp2);
        }else
            temp = temp->next;
    }
    return head;
}
