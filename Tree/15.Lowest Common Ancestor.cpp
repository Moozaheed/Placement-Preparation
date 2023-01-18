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

bool getpath(Node *root,int key,vector<int>&path)
{
    if(root==NULL)return false;
    path.push_back(root->data);
    if(root->data==key)return true;
    if(getpath(root->left,key,path) || getpath(root->right,key,path))return true;

    path.pop_back();
    return false;
}


int LCA(Node* root,int n1,int n2)
{
    vector<int>path1,path2;

    if( !getpath(root,n1,path1) || !getpath(root,n2,path2))return -1;

    int pc;
    for(pc=0;pc<path1.size() && path2.size(); pc++)
    {
        if(path1[pc]!=path2[pc])
        {
            break;
        }
    }

    return path1[pc-1];
}

Node* LCA2(Node* root,int n2,int n1)
{
    if(root->data==n1 || root->data==n2)return root;
    Node* node leftlca=LAC2(root->left,n2,n1);
    Node* node rightlca=LAC2(root->right,n2,n1);

    if(leftlac && rightlca)
    {
        return root;
    }
    if(leftlac!=NULL)return leftlca;
    return rightlca;


}



int main()
{

    struct Node* root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->right->right=new Node(5);


    int n1=4;
    int n2=5;
    int lca=LCA(root,n1,n2);
    if(lca==-1){
        cout<<"Doesn't Exist"<<endl;
    }
    else cout<<lca<<endl;




}
