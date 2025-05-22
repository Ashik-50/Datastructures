#include <bits/stdc++.h>
using namespace std;

// A binary tree node has data, pointer to left child and a pointer to right child

class node {
public:
    int data;
    node *left, *right;
};

// Function prototypes

void printCurrentLevel(node* root, int level);
int height(node* node);
node* newNode(int data);
node* buildTree();

// Function to print level order traversal of a tree

void printLevelOrder(node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

// Print nodes at a current level

void printCurrentLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

// Compute the "height" of a tree -- the number of nodes along the longest path from the root node down to the farthest leaf node.

int height(node* node)
{
    if (node == NULL)
        return 0;
    else {
        
        // Compute the height of each subtree

        int lheight = height(node->left);
        int rheight = height(node->right);

        // Use the larger one

        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

// Helper function that allocates a new node with the given data and NULL left and right pointers.

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

// Function to build the tree from user input in level order

node* buildTree()
{
    int data;
    cout << "Enter root data: ";
    cin >> data;
    
    if (data == -1) {
        return NULL;
    }

    node* root = newNode(data);
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* current = q.front();
        q.pop();

        int leftData, rightData;
        cout << "Enter left child of " << current->data << " (or -1 for NULL): ";
        cin >> leftData;
        if (leftData != -1) {
            current->left = newNode(leftData);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->data << " (or -1 for NULL): ";
        cin >> rightData;
        if (rightData != -1) {
            current->right = newNode(rightData);
            q.push(current->right);
        }
    }

    return root;
}

// Driver code

int main()
{
    node* root = buildTree();
    
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);

    return 0;
}
