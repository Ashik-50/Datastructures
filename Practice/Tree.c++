#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int v){
        data=v;
        left=right=NULL;
    }
};
Node* buildTree(){
    int data;
    cout<<"Enter the root data : ";
    cin>>data;
    Node* root=new Node(data);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        int left,right;
        cout<<"Enter the left of the "<<temp->data<<" (or -1 if NULL) : ";
        cin>>left;
        if(left!=-1){
            temp->left=new Node(left);
            q.push(temp->left);
        }
        cout<<"Enter the right of the "<<temp->data<<" (or -1 if NULL) : ";
        cin>>right;
        if(right!=-1){
            temp->right=new Node(right);
            q.push(temp->right);
        }
    }
    return root;
}
void printInorder(Node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printpreorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
void printpostorder(Node* root){
    if(root==NULL){
        return;
    }
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=buildTree();
    cout<<"Inorder traversal of binary tree is : ";
    printInorder(root);
    cout<<"\nPreorder traversal of binary tree is : ";
    printpreorder(root);
    cout<<"\nPostorder traversal of binary tree is : ";
    printpostorder(root);
}