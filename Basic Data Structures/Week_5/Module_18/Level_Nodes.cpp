#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left; 
    Node* right; 
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
    
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)
    root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *myLeft, *myRight;
        if(l==-1)
        myLeft=NULL;
        else myLeft=new Node(l);
        
        if(r==-1)
        myRight=NULL;
        else myRight=new Node(r);
        p->left=myLeft;
        p->right=myRight;
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
};
int print_level_nodes(Node* root, int level)
{
    if(root==NULL)
    return false;
    if(level==0)
    {
        cout<<root->val<<" ";
        return true;
    }
    bool left=print_level_nodes(root->left,level-1);
    bool right=print_level_nodes(root->right,level-1);
    return left||right;
}

int main()
{
    Node* root=input_tree();
    int level;
    cin>>level;
    bool found=print_level_nodes(root,level);
    if(!found)
    cout<<"Invalid";
    return 0;
}