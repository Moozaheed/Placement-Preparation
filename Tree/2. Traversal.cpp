//https://www.youtube.com/watch?v=67zlUtAr2LE&list=PLGGC50BrjrMQON8UUqlZgVd1LCEn1lr7O&index=2
#include<bits/stdc++.h>
using namespace std;

//Preorder
//Root -> Left -> Right
//sob gula visit kore kore jabe


//Inorder
//Left -> Root -> Right
//Akdom last er left ta visit kore kore asbe

//Postorder
//Left -> Root -> Right


void preorder(struct Node* root)
{
    if(root==NULL)return;
    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{


}