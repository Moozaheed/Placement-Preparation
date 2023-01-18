//Last common node

//Prothi level er top right 
//Level order triversal (Queue)

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


int countnode(Node *root)
{
    if(root==NULL)return 0;
    return countnode(root->left)+countnode(root->right)+1;
}


int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->right->right=new Node(5);


cout<<countnode(root);


}
