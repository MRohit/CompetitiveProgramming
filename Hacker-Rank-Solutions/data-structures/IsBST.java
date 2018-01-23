/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
     }
*/
int findMin (Node root) {
    if (root == null)
        return Integer.MIN_VALUE;
    while (root.left != null)
        root = root.left;
    return root.data;
}
int findMax (Node root) {
    if (root == null)
        return Integer.MAX_VALUE;
    while (root.right != null)
        root = root.right;
    return root.data;
}
    boolean checkBST(Node root) {
        // base case
        if (root == null)
            return true;
        // check if left is greater, if yes return false
        if (root.left != null && root.left.data < findMax (root.left))
            return false;
        // check if right is smaller, if yes return false
        if (root.right != null && root.right.data > findMin(root.right))
            return false;
        // recursively check if left and right is not a BST
        if (!checkBST (root.left) || !checkBST (root.right))
            return false;

        // if above all are true then return true;
        return true;
    }
