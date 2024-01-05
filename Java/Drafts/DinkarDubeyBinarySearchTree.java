class TreeNode {
    int data;
    TreeNode left;
    TreeNode right;

    public TreeNode(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

public class DinkarDubeyBinarySearchTree {
    private TreeNode root; // Using References

    public DinkarDubeyBinarySearchTree() {
        this.root = null;
    }

    public void insert(int data) {
        root = insertRecursive(root, data);
    }

    private TreeNode insertRecursive(TreeNode current, int data) {
        if (current == null) {
            return new TreeNode(data);
        }

        if (data < current.data) {
            current.left = insertRecursive(current.left, data);
        } else if (data > current.data) {
            current.right = insertRecursive(current.right, data);
        }

        return current;
    }

    public boolean search(int data) {
        return searchRecursive(root, data);
    }

    private boolean searchRecursive(TreeNode current, int data) {
        if (current == null) {
            return false;
        }

        if (data == current.data) {
            return true;
        } else if (data < current.data) {
            return searchRecursive(current.left, data);
        } else {
            return searchRecursive(current.right, data);
        }
    }

    public void delete(int data) {
        root = deleteRecursive(root, data);
    }

    private TreeNode deleteRecursive(TreeNode current, int data) {
        if (current == null) {
            return null;
        }

        if (data < current.data) {
            current.left = deleteRecursive(current.left, data);
        } else if (data > current.data) {
            current.right = deleteRecursive(current.right, data);
        } else {
            if (current.left == null) {
                return current.right;
            } else if (current.right == null) {
                return current.left;
            }

            current.data = minValue(current.right);
            current.right = deleteRecursive(current.right, current.data);
        }

        return current;
    }

    private int minValue(TreeNode root) {
        int minValue = root.data;
        while (root.left != null) {
            minValue = root.left.data;
            root = root.left;
        }
        return minValue;
    }

    public void inOrderTraversal() {
        System.out.print("In-order traversal by Dinkar Dubey: ");
        inOrderTraversalRecursive(root);
        System.out.println();
    }

    private void inOrderTraversalRecursive(TreeNode current) {
        if (current != null) {
            inOrderTraversalRecursive(current.left);
            System.out.print(current.data + " ");
            inOrderTraversalRecursive(current.right);
        }
    }

    // Operation: Minimum Value
    public int findMinValue() {
        if (root == null) {
            throw new IllegalStateException("Tree is empty");
        }
        return findMinValue(root);
    }

    private int findMinValue(TreeNode node) {
        while (node.left != null) {
            node = node.left;
        }
        return node.data;
    }

    // Operation: Maximum Value
    public int findMaxValue() {
        if (root == null) {
            throw new IllegalStateException("Tree is empty");
        }
        return findMaxValue(root);
    }

    private int findMaxValue(TreeNode node) {
        while (node.right != null) {
            node = node.right;
        }
        return node.data;
    }

    // Operation: Tree Height
    public int findTreeHeight() {
        return findTreeHeight(root);
    }

    private int findTreeHeight(TreeNode node) {
        if (node == null) {
            return -1; // Height of an empty tree is -1
        }

        int leftHeight = findTreeHeight(node.left);
        int rightHeight = findTreeHeight(node.right);

        return Math.max(leftHeight, rightHeight) + 1;
    }

    public static void main(String[] args) {
        DinkarDubeyBinarySearchTree dinkarTree = new DinkarDubeyBinarySearchTree();

        System.out.println("");

        dinkarTree.insert(5);
        dinkarTree.insert(3);
        dinkarTree.insert(8);
        dinkarTree.insert(1);
        dinkarTree.insert(4);

        dinkarTree.inOrderTraversal();

        int searchData = 4;
        System.out.println("");
        System.out.println("Searching for " + searchData + " (by Dinkar Dubey): " + dinkarTree.search(searchData));
        System.out.println("");

        int deleteData = 3;
        System.out.println("Deleting " + deleteData + " (by Dinkar Dubey)");
        System.out.println("");
        dinkarTree.delete(deleteData);
        dinkarTree.inOrderTraversal();
        System.out.println("");

        System.out.println("Minimum Value: " + dinkarTree.findMinValue());
        System.out.println("");
        System.out.println("Maximum Value: " + dinkarTree.findMaxValue());
        System.out.println("");
        System.out.println("Tree Height: " + dinkarTree.findTreeHeight());
        System.out.println("");
    }
}