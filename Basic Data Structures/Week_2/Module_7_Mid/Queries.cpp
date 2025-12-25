#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next; 
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
    
};
void insert_at_head(Node* &head,Node* &tail,int input_val)
{
    Node* newnode=new Node(input_val);
    newnode->next=head;
    head=newnode;
    if (tail==NULL)
    {
        tail=newnode;
    }
    
}
void insert_at_tail(Node* &head,Node* &tail,int input_val)
{
    Node* newnode=new Node(input_val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    
   
    tail->next=newnode;
    tail=newnode;
}

void print_linked_list(Node*  &head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val;
        if (temp->next!=NULL)
        {
            cout<<" ";
        }
        
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    
    int t;
    cin>>t;
    while (t--)
    {
        int val,input_val;
        cin>>val>>input_val;
        if (val==0)
        {
            insert_at_head(head,tail,input_val);
        }
        else if (val==1)
        {
            insert_at_tail(head,tail,input_val);
        }
        else if (val==2)
        {
            delete_index(head,tail,input_val);
        }
        print_linked_list(head);
    }
    
    return 0;
}
