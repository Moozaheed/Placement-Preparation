// Algorithm
// 1. Start from the end of postorder & pick an element to create a node
// 2. Decrement postorder idx
// 3. Search for picked element's pos in inorder
// 4. Call to build right subtree from inorder's pos+l to n
// 5. Call to build left subtree from inordcr O to pos-l
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

int search(int inorder[],int start,int end,int val)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==val)return i;
    }
    return -1;
}

Node* bnuildtree(int postorder[],int inorder[],int start,int end)
{
    if(start>end)return NULL;

    static int idx=4;

    int val=postorder[idx];
    idx--;
    Node* curr=new Node(val);

    if(start==end)return curr;

    int pos=search(inorder,start,end,val);
    curr->right=bnuildtree(postorder,inorder,pos+1,end);
    curr->left=bnuildtree(postorder,inorder,start,pos-1);

    return curr;
}

void inorderprint(struct Node* root)
{
    if(root==NULL)return;
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}


int main()
{

    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};


    //Build Tree

    Node* root=bnuildtree(postorder,inorder,0,4);
    inorderprint(root);



}


