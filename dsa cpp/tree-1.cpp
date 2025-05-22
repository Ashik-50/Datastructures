#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        root = new Node();
        root->data = value;
        root->left = nullptr;
        root->right = nullptr;
    } else if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

void postorder(Node* root) {
    stack<Node*> s1, s2;
    s1.push(root);
    while (!s1.empty()) {
        Node* curr = s1.top();
        s1.pop();
        s2.push(curr);
        if (curr->left != nullptr) {
            s1.push(curr->left);
        }
        if (curr->right != nullptr) {
            s1.push(curr->right);
        }
    }
    while (!s2.empty()) {
        Node* curr = s2.top();
        s2.pop();
        cout << curr->data << " ";
    }
}

int main() {
    Node* root = nullptr;
    int value;
    while (true) {
        cin >> value;
        if (value < 1) {
            break;
        }
        root = insert(root, value);
    }
    postorder(root);
    return 0;
}

