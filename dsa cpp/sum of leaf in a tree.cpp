#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node* insert(Node* root, int data) {
    if (root == NULL)
        return newNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

int sumOfLeafNodes(Node* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
}

int main() {
    Node* root = NULL;
    int data;
    while (cin >> data && data >= 1)
        root = insert(root, data);
    cout << sumOfLeafNodes(root) << endl;
    return 0;
}

