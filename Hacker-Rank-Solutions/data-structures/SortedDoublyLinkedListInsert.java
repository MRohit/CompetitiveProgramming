/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  class Node {
     int data;
     Node next;
     Node prev;
  }
*/

Node SortedInsert(Node head,int data) {
    Node newNode = new Node();
    newNode.data = data;
    if(head == null)
        return newNode;
    else if (data <= head.data) {
        newNode.next = head;
        head.prev = newNode;
        return newNode;
    } else {
        Node rest = SortedInsert (head.next, data);
        head.next = rest;
        rest.prev = head;
        return head;
    }
}
