/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *temp=head,*temp2;
    int k=0;
    if(position==0){
        head = head->next;
        free(temp);
    }else {
        while(temp!=NULL && k < position){
            temp2=temp;
            temp = temp->next;
            k++;
        }
        temp2->next = temp->next;
        free(temp);
    }
    return head;
}
