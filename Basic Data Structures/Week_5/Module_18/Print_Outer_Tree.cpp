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

vector<int> leftOutersub(Node* root)
{
    vector<int> v;
    while (root)
    {
        v.push_back(root->val);
        if(root->left)
        root=root->left;
        else root=root->right;
    }
    return v;
    
};
vector<int> rightOutersub(Node* root)
{
    vector<int> v;
    while (root)
    {
        v.push_back(root->val);
        if(root->right)
        root=root->right;
        else root=root->left;
    }
    return v;
    
};
void leftOuter(Node* root)
{
    vector<int> v= leftOutersub(root);
    reverse(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
}
void rightOuter(Node* root)
{
    vector<int> v= rightOutersub(root);
    for(int x:v)
    cout<<x<<" ";
}
void allOuter(Node* root)
{
    vector<int> myLeft=leftOutersub(root);
    vector<int> myRight=rightOutersub(root);
    cout<<myLeft.back()<<" ";
    
    for (int i =myLeft.size()-2;i>0;i--)
    cout<<myLeft[i]<<" ";

    cout<<root->val<<" ";

    for (int i = 1; i < myRight.size()-1; i++)
    cout<<myRight[i]<<" ";

    if(myLeft.back()!=myRight.back())
    cout<<myRight.back()<<" ";
    
    
}
void print_outer_tree(Node* root)
{
    if(root==NULL)
    return;
    if (!root->left&&!root->right)
    {
        cout<<root->val<<" ";
        return;
    }
    
    if(root->left&&!root->right)
    leftOuter(root);
    else if(!root->left&&root->right)
    rightOuter(root);
    else allOuter(root);
    

};

int main()
{
    Node* root=input_tree();
    print_outer_tree(root);
    return 0;
}