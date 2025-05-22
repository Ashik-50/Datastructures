#include <bits/stdc++.h>
using namespace std;

// Structure of a Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }
};

// Function to print preorder traversal
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    // Deal with the node
    cout << node->data << " ";

    // Recur on left subtree
    printPreorder(node->left);

    // Recur on right subtree
    printPreorder(node->right);
}

// Function to build the tree from user input in level order
Node* buildTree()
{
    int data;
    cout << "Enter root data: ";
    cin >> data;
    
    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftData, rightData;
        cout << "Enter left child of " << current->data << " (or -1 for NULL): ";
        cin >> leftData;
        if (leftData != -1) {
            current->left = new Node(leftData);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->data << " (or -1 for NULL): ";
        cin >> rightData;
        if (rightData != -1) {
            current->right = new Node(rightData);
            q.push(current->right);
        }
    }

    return root;
}

// Driver code
int main()
{
    Node* root = buildTree();
    
    cout << "Preorder traversal of binary tree is: \n";
    printPreorder(root);

    return 0;
}
