// kono akta node theke k durutte kon kon node ase

// Case 1: Nodes at subtree.
// Case 2: Nodes at Ancestor.


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


//Case 1
void printsubtree(Node* root,int k)
{
    if(root==NULL|| k<0)return;

    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }

    printsubtree(root->left,k-1);
    printsubtree(root->right,k-1);
}

//Case 2
int printnodesatk(Node* root,Node *target,int k)
{
    if(root==NULL)return -1;
    if(root==target)
    {
        printsubtree(root,k);
        return 0;
    }

    int dl=printnodesatk(root->left,target,k);
    if(dl != -1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            printsubtree(root->right,k-dl-2);
        }
        return 1+dl;
    }
    
    int dr=printnodesatk(root->right,target,k);
    if(dr != -1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            printsubtree(root->left,k-dr-2);
        }
        return 1+dr;
    }

    return -1;




}



int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);


    printnodesatk(root,root->left,1);


}
