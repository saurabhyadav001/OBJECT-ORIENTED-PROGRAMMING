#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node 
{
   int data;
   Node *left ,*right;
   Node(int x)
   {
       data =x;
       left = NULL;
       right = NULL;
   }
};
void preorder(Node *root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(Node *root)
{
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";   
    inorder(root->right);
}
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->right = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);     
    preorder(root);
    cout<<endl;
    postorder(root);cout<<endl;
    inorder(root);
    // postorder(root);
    // inorder(root);

}