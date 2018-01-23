/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
        Node prev;
     }
*/
    boolean isBST (Node root, Node prev) {
        if (root != null) {
            if (!isBST(root.left,prev))
                return false;
            if (prev != null && root.data <= prev.data)
                return false;
            prev = root;
            return isBST(root.right,prev);
        }
        return true;
    }
    boolean checkBST(Node root) {
        Node prev = null;
        return isBST(root, prev);
    }
