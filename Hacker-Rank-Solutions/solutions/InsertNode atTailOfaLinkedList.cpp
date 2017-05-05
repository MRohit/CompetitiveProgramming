/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node*newNode=(Node*)malloc(sizeof(Node));
    
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)  return newNode;
    Node*temp=head;
    while(temp->next!=NULL) {
           temp=temp->next;
    }
    
    temp->next=newNode;
    return head;
}
