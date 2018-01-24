/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
        Node prev;
     }
*/
    boolean isBST (Node root, Node left, Node right) {
        if (root == null)
            return true;
        if (left != null && root.data <= left.data)
            return false;

        if (right != null && root.data >= right.data)
            return false;

        return isBST (root.left, left, root) && isBST (root.right, root, right);

    }
    boolean checkBST(Node root) {
        Node prev = null;
        return isBST(root, null,null);
    }
