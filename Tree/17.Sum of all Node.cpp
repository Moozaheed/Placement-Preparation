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


int sum(Node *root)
{
    if(root==NULL)return 0;
    return sum(root->left)+sum(root->right)+root->data;
}


int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->right->right=new Node(5);


    cout<<sum(root);


}
