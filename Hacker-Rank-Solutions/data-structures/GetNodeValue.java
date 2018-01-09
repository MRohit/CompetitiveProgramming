/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  class Node {
     int data;
     Node next;
  }
*/

int GetNode(Node head,int n) {
     // This is a "method-only" submission.
     // You only need to complete this method.

    Node temp = null, temp2 = head;
    for (int i = 0; i < n; i ++)
        temp2 = temp2.next;
    while (temp2 != null) {
        if (temp == null)
            temp = head;
        else
            temp = temp.next;
        temp2 = temp2.next;
    }
    return temp.data;
}
