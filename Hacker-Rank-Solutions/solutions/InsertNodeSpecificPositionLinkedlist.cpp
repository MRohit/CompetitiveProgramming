#include<stdlib.h>
/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *temp = head;
    int k=0;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if(position == 0){
        newNode->next = head;
        head = newNode;
        
    }
    else {
        while(temp!=NULL && k < position-1){
            k++;
            temp=temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}
