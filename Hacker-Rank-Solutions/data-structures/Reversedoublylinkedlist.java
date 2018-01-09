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

Node Reverse(Node head) {
    Node curr = head, next = null, temp = null;
    while (curr != null) {
        next = curr.next;
        curr.next = temp;
        curr.prev = next;
        temp = curr;
        curr = next;
    }
    return temp;
}
