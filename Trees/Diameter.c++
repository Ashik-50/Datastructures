#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* buildTree(){
    int val;
    cin>>val;
    if(val==-1) return NULL;
    Node* root=new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* cur=q.front();
        q.pop();
        int leftval,rightval;
        cin>>leftval;
        if(leftval!=-1){
            cur->left=new Node(leftval);
            q.push(cur->left);
        }
        cin>>rightval;
        if(rightval!=-1){
            cur->right=new Node(rightval);
            q.push(cur->right);
        }
    }
    return root;
}
int main(){
    Node* root=buildTree();
}