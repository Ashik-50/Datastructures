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

// Class to store diameter calculation information
class DiameterInfo {
public:
    int height;
    int diameter;
    DiameterInfo(int h, int d) : height(h), diameter(d) {}
};

// Function to calculate diameter
DiameterInfo calculateDiameterUtil(Node* root) {
    // Base case
    if (root == NULL) {
        return DiameterInfo(0, 0);
    }

    // Get values from left and right subtrees
    DiameterInfo leftInfo = calculateDiameterUtil(root->left);
    DiameterInfo rightInfo = calculateDiameterUtil(root->right);

    // Height of current node is max of left/right subtree heights plus 1
    int height = max(leftInfo.height, rightInfo.height) + 1;

    // Get diameter through root (left height + right height)
    int diameterThroughRoot = leftInfo.height + rightInfo.height;

    // Diameter is maximum of:
    // 1. Diameter through root
    // 2. Diameter of left subtree
    // 3. Diameter of right subtree
    int diameter = max({diameterThroughRoot, leftInfo.diameter, rightInfo.diameter});

    return DiameterInfo(height, diameter);
}

// Wrapper function to get diameter
int getDiameter(Node* root) {
    return calculateDiameterUtil(root).diameter;
}

// Function to build the tree from user input in level order
Node* buildTree() {
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
int main() {
    cout << "Build your binary tree (Enter -1 for NULL nodes):\n";
    Node* root = buildTree();
    
    cout << "\nDiameter of the binary tree is: " << getDiameter(root) << endl;
    return 0;
} 