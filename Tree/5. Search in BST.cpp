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




Node* searchinBST(Node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return searchinBST(root->left,key);
    }
    return searchinBST(root->right,key);
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

    

    if(searchinBST(root,10)==NULL)cout<<"Doesn't Found"<<endl;
    else cout<<"Found"<<endl;


    
    return 0;
}

