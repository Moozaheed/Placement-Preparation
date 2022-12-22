#include<bits/stdc++.h>
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

int height(Node* root)
{
    if(root==NULL)return 0;
    int l_height=height(root->left);
    int r_height=height(root->right);
    return max(l_height,r_height)+1;
}


//Number of nodes in the longest path between any 2 leaves
//akta node er left diameter and tar height ta dekhbo abar left diameter and height tao dekhbo tader modde max ta return korbo
//O(n*n)
int diameter(Node *root)
{
    if(root==NULL)return 0;
    int l_height=height(root->left);
    int r_height=height(root->right);

    int curr_dia=l_height+r_height+1;

    int l_diameter=diameter(root->left);
    int r_diameter=diameter(root->right);

    return max({curr_dia,l_diameter,r_diameter});
}


//Less Complexciti

int dia(Node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int l_diameter=dia(root->left,&lh);
    int r_diameter=dia(root->right,&rh);
    
    int curr=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(curr,max(l_diameter,r_diameter));

}


int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<diameter(root)<<endl;


    int height=0;
    cout<<dia(root,&height);




}
