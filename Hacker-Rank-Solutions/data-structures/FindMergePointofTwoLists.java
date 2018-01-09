/*
  Find merge point of two linked lists
  head pointer input could be NULL as well for empty list
  Node is defined as
  class Node {
     int data;
     Node next;
  }
*/
int FindMergeNode(Node headA, Node headB) {
    // Complete this function
    // Do not write the main method.
    int len1 = 0, len2 = 0;
    Node temp1 = headA, temp2 = headB;
    while (temp1 != null){
        temp1 = temp1.next;
        len1++;
    }
    while (temp2 != null) {
        temp2 = temp2.next;
        len2++;
    }
    int diff = 0;
    temp1 = headA; temp2 = headB;
    if (len1 > len2) {
        diff = len1 - len2;
        temp1 = headA;
        for (int i = 0; i<diff; i ++) {
            temp1 = temp1.next;
        }
    } else {
        diff = len2 - len1;
        temp2 = headB;
        for (int i = 0; i<diff; i ++) {
            temp2 = temp2.next;
        }
    }
    while (temp1 != null && temp2 != null) {
        if (temp1 == temp2)
            return temp1.data;
        temp1 = temp1.next;
        temp2 = temp2.next;
    }
    return 0;
}
