// Case 1 (Node is a Leaf):Just Free the Node
// Case 2 (Node has one child): Replace node with child & delete the node
// Case 3 ( Node has two child): Find the inorder successor

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

//inorder successsor
Node* inordersucc(Node *root)
{
    Node* curr=root;
    while(curr && curr->left!=NULL)
    {
        curr=curr->left; 
    } 
    return curr;
}

Node* deleteinBST(Node* root,int key)
{
    if(key<root->data)
    {
        root->left=deleteinBST(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=deleteinBST(root->right,key);
    }
    else
    {
        //Case 1 and 2 both 
        if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }

        //Case 3

        Node *temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deleteinBST(root->right,temp->data);
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

    cout<<endl;
    
    root = deleteinBST(root,5);

    inorder(root);


    
    return 0;
}