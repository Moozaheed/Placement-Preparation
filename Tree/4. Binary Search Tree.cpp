
//Rule 1: The left subtree of a node contains only nopdes with keys lesser than the nodes key
//Rule 2: The right subtree of a nodes contains only keys greater than the nodes key
//Rule 3: The left and roght subtree each must also be a binary tree. There must be no duplicates nodes 


#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node (int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

};

Node* insertBST(Node *root ,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insertBST(root->left,val);
    }
    else
    {
        root->right=insertBST(root->right,val);
    }
    return root;
}


void inorder(struct Node* root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() 
{

    Node *root=NULL;
    root=insertBST(root,5);
    root=insertBST(root,1);
    root=insertBST(root,3);
    root=insertBST(root,4);
    root=insertBST(root,2);
    root=insertBST(root,7); 

    inorder(root);


    
    return 0;
}