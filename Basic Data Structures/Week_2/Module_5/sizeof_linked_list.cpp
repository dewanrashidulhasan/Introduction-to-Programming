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
void sizeof_linkedlist(Node* &head,int &size)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
}

int main()
{
    Node* head=new Node(2);
    Node* a=new Node(1);
    Node* b=new Node(5);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(8);
    Node* f=new Node(9);
    int size=0;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    
    sizeof_linkedlist(head,size);
    cout<<size<<endl;
    return 0;
}