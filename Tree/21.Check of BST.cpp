//Valid BST or Not
//https://www.youtube.com/watch?v=_XgTN72fguk&list=PLGGC50BrjrMQON8UUqlZgVd1LCEn1lr7O&index=18

//Approach 2

// Node>maxL_subtree
// Node<minR_subtree

// Approch 3
// min allowed < node
// max allowed > node

// Strategy:
//         node(min,max)
// left(min,node)  right(max,node)


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

//Complexcity O(N)

bool isBST(Node* root,Node* min=NULL,Node* max=NULL)
{
    if(root==NULL) return true;
    if(min!=NULL && root->data<=min->data)return false;
    if(max!=NULL && root->data>=max->data)return false;

    bool leftvalid = isBST(root->left,min,root);
    bool rightvalid = isBST(root->right,root,max);

    return leftvalid && rightvalid;
}


int main()
{

    struct Node* root=new Node(5);
    root->left =new Node(2);
    root->right=new Node(8);
    
    if(isBST(root,NULL,NULL))cout<<"Valid"<<endl;
    else cout<<"Not Valid"<<endl;


}
