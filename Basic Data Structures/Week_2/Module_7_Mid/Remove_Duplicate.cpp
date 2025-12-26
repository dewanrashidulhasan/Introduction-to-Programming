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
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    
   
    tail->next=newnode;
    tail=newnode;
}
void insert_at_any_pos(Node* &head,int idx,int val)
{
    Node* newnode=new Node(val);
    Node* temp=head;
    for (int i = 1; i < idx; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print_linked_list_rd(Node*  &head)
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
    
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int frequency[10001]={0};
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        if (frequency[val]==0)
        {
            frequency[val]++;
            insert_at_tail(head,tail,val);
        }
        
        
    }
    print_linked_list_rd(head);
    return 0;
}
