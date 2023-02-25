// https://www.youtube.com/watch?v=xDayqPCWmkY&list=PLGGC50BrjrMQON8UUqlZgVd1LCEn1lr7O&index=16
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

// Time Complexcity: O(n)
void sumreplace(Node* root)
{
    if(root==NULL)return;
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left!=NULL)
    {
        root->data+=root->left->data;
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;
    }

}
void preorder(Node* root)
{
    if(root==NULL)return; 
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}




int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);


    preorder(root);
    sumreplace(root);
    cout<<endl;
    preorder(root);


}
