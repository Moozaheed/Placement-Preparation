//For each node the differece between the height of the left subtree and right subtree <=1

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

//Complexcity O(n)
int height(Node* root)
{
    if(root==NULL)return 0;
    int l_height=height(root->left);
    int r_height=height(root->right);
    return max(l_height,r_height)+1;
}



//Complexcity O(n*n)
bool isbalanced(Node * root)
{
    if(root==NULL)
    {
        return true;
    }

    if(isbalanced(root->left)==false)return false;
    if(isbalanced(root->right)==false)return false;

    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1)return true;
    else return false;
    
}


//Less Complexcity O(n)

bool isbalanced(Node* root, int* height)
{
    if(root==NULL)return true;
    int lh=0,rh=0;
    if(isbalanced(root->left,&lh)==false)return false;
    if(isbalanced(root->right,&rh)==false)return false;

    *height=max(lh,rh)+1;

    if(abs(lh-rh)<=1)return true;
    else return false;
}



int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);



    //O(n*n)
    if(isbalanced(root))cout<<"Balanced Tree";
    else cout<<"! Balanced Tree";
    cout<<endl;

    //O(n)
    int height=0;
    if(isbalanced(root,&height))cout<<"Balanced Tree";
    else cout<<"! Balanced Tree";

}