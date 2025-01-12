//Construct tree from Inorder and Preorder tree


//https://www.youtube.com/watch?v=HJKoNLGRnYk&list=PLGGC50BrjrMQON8UUqlZgVd1LCEn1lr7O&index=3

// Algorithm
// 1. Pick element from preorder & create a node
// 2. Increment preorder idx 
// 3. Search for picked elements pos in inorder 
// 4. Call to build left subtree from inorder's 0 to pos-1
// 4. Call to build right subtree from inorder's pos+1 to n 
// 6. Return the node

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

int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)return i;
    }
    return -1;
}

Node* buildtree(int preorder[],int inorder[],int start,int end)
{
    if(start>end)return NULL;

    static int idx=0;
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);

    if(start==end)return node;

    int pos=search(inorder,start,end,curr);
    node->left=buildtree(preorder,inorder,start,pos-1);
    node->right=buildtree(preorder,inorder,pos+1,end);

    return node;
}

//For Print
void inorderprint(struct Node* root)
{
    if(root==NULL)return;
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}



int main() 
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};


    //Build Tree
    Node *root=buildtree(preorder,inorder,0,4);
    inorderprint(root);
 
}