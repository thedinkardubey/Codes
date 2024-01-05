#include <iostream>

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
};

class DinkarDubeyBinarySearchTree
{
private:
    TreeNode *root; // Using pointers

public:
    DinkarDubeyBinarySearchTree()
    {
        root = nullptr;
    }

    void insert(int data)
    {
        root = insertRecursive(root, data);
    }

    TreeNode *insertRecursive(TreeNode *current, int data)
    {
        if (current == nullptr)
        {
            return new TreeNode(data);
        }

        if (data < current->data)
        {
            current->left = insertRecursive(current->left, data);
        }
        else if (data > current->data)
        {
            current->right = insertRecursive(current->right, data);
        }

        return current;
    }

    bool search(int data)
    {
        return searchRecursive(root, data);
    }

    bool searchRecursive(TreeNode *current, int data)
    {
        if (current == nullptr)
        {
            return false;
        }

        if (data == current->data)
        {
            return true;
        }
        else if (data < current->data)
        {
            return searchRecursive(current->left, data);
        }
        else
        {
            return searchRecursive(current->right, data);
        }
    }

    void deleteNode(int data)
    {
        root = deleteRecursive(root, data);
    }

    TreeNode *deleteRecursive(TreeNode *current, int data)
    {
        if (current == nullptr)
        {
            return nullptr;
        }

        if (data < current->data)
        {
            current->left = deleteRecursive(current->left, data);
        }
        else if (data > current->data)
        {
            current->right = deleteRecursive(current->right, data);
        }
        else
        {
            if (current->left == nullptr)
            {
                return current->right;
            }
            else if (current->right == nullptr)
            {
                return current->left;
            }

            current->data = minValue(current->right);
            current->right = deleteRecursive(current->right, current->data);
        }

        return current;
    }

    int minValue(TreeNode *root)
    {
        int minValue = root->data;
        while (root->left != nullptr)
        {
            minValue = root->left->data;
            root = root->left;
        }
        return minValue;
    }

    void inOrderTraversal()
    {
        std::cout << "In-order traversal by Dinkar Dubey: ";
        inOrderTraversalRecursive(root);
        std::cout << std::endl;
    }

    void inOrderTraversalRecursive(TreeNode *current)
    {
        if (current != nullptr)
        {
            inOrderTraversalRecursive(current->left);
            std::cout << current->data << " ";
            inOrderTraversalRecursive(current->right);
        }
    }

    // Operation: Minimum Value
    int findMinValue()
    {
        if (root == nullptr)
        {
            throw std::runtime_error("Tree is empty");
        }
        return findMinValue(root);
    }

    int findMinValue(TreeNode *node)
    {
        while (node->left != nullptr)
        {
            node = node->left;
        }
        return node->data;
    }

    // Operation: Maximum Value
    int findMaxValue()
    {
        if (root == nullptr)
        {
            throw std::runtime_error("Tree is empty");
        }
        return findMaxValue(root);
    }

    int findMaxValue(TreeNode *node)
    {
        while (node->right != nullptr)
        {
            node = node->right;
        }
        return node->data;
    }

    // Operation: Tree Height
    int findTreeHeight()
    {
        return findTreeHeight(root);
    }

    int findTreeHeight(TreeNode *node)
    {
        if (node == nullptr)
        {
            return -1; // Height of an empty tree is -1
        }

        int leftHeight = findTreeHeight(node->left);
        int rightHeight = findTreeHeight(node->right);

        return std::max(leftHeight, rightHeight) + 1;
    }
};

int main()
{
    DinkarDubeyBinarySearchTree dinkarTree;

    std::cout << std::endl;

    dinkarTree.insert(5);
    dinkarTree.insert(3);
    dinkarTree.insert(8);
    dinkarTree.insert(1);
    dinkarTree.insert(4);

    dinkarTree.inOrderTraversal();

    std::cout << std::endl;

    int searchData = 4;
    std::cout << "Searching for " << searchData << " (by Dinkar Dubey): " << dinkarTree.search(searchData) << std::endl
              << std::endl;

    int deleteData = 3;
    std::cout << "Deleting " << deleteData << " (by Dinkar Dubey)" << std::endl
              << std::endl;
    dinkarTree.deleteNode(deleteData);

    dinkarTree.inOrderTraversal();

    std::cout << std::endl;

    std::cout << "Minimum Value: " << dinkarTree.findMinValue() << std::endl << std::endl;
    std::cout << "Maximum Value: " << dinkarTree.findMaxValue() << std::endl << std::endl;
    std::cout << "Tree Height: " << dinkarTree.findTreeHeight() << std::endl << std::endl;

    return 0;
}